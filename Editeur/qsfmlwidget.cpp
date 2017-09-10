#include "qsfmlwidget.h"
#ifdef Q_WS_X11
    #include <Qt/qx11info_x11.h>
    #include <X11/Xlib.h>
#endif

QSFMLWidget::QSFMLWidget(QWidget *parent, QSize const& size, QPoint const& position, unsigned int frametime) : QWidget(parent), m_initialized(false)
{
    setAttribute(Qt::WA_PaintOnScreen);
    setAttribute(Qt::WA_OpaquePaintEvent);
    setAttribute(Qt::WA_NoSystemBackground);

    setFocusPolicy(Qt::StrongFocus);

    resize(size);
    move(position);

    m_timer.setInterval(frametime);
}

QSFMLWidget::~QSFMLWidget()
{
}

void QSFMLWidget::showEvent(QShowEvent*)
{
    if (!m_initialized)
    {
        // Sous X11, il faut valider les commandes qui ont été envoyées au serveur
        // afin de s'assurer que SFML aura une vision à jour de la fenêtre
        #ifdef Q_WS_X11
            XFlush(QX11Info::display());
        #endif

        // On crée la fenêtre SFML avec l'identificateur du widget
        RenderWindow::create(reinterpret_cast<sf::WindowHandle>(winId()));

        // On laisse la classe dérivée s'initialiser si besoin
        OnInit();

        // On paramètre le timer de sorte qu'il génère un rafraîchissement à la fréquence souhaitée
        connect(&m_timer, SIGNAL(timeout()), this, SLOT(repaint()));
        m_timer.start();

        m_initialized = true;
    }
}

QPaintEngine* QSFMLWidget::paintEngine() const
{
    return 0;
}

void QSFMLWidget::paintEvent(QPaintEvent*)
{
    // On laisse la classe dérivée faire sa tambouille
    OnUpdate();

    // On rafraîchit le widget
    RenderWindow::display();
}
