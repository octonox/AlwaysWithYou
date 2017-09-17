#include "qsfmlwidget.h"
#ifdef Q_WS_X11
    #include <Qt/qx11info_x11.h>
    #include <X11/Xlib.h>
#endif

QSFMLWidget::QSFMLWidget(QWidget *parent) : QWidget(parent), m_initialized(false)
{
    setAttribute(Qt::WA_PaintOnScreen);
    setAttribute(Qt::WA_OpaquePaintEvent);
    setAttribute(Qt::WA_NoSystemBackground);

    setFocusPolicy(Qt::StrongFocus);
}

QSFMLWidget::~QSFMLWidget()
{
}

void QSFMLWidget::showEvent(QShowEvent* event)
{
    Q_UNUSED(event)
    if (!m_initialized)
    {
        // Sous X11, il faut valider les commandes qui ont été envoyées au serveur
        // afin de s'assurer que SFML aura une vision à jour de la fenêtre
        #ifdef Q_WS_X11
            XFlush(QX11Info::display());
        #endif

        // On crée la fenêtre SFML avec l'identificateur du widget
#ifdef WIN32
        RenderWindow::create(reinterpret_cast<sf::WindowHandle>(winId()));
#else
        RenderWindow::create(winId());
#endif

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

void QSFMLWidget::paintEvent(QPaintEvent* event)
{
    Q_UNUSED(event)
    RenderWindow::clear();
    // On laisse la classe dérivée faire sa tambouille
    OnUpdate();

    // On rafraîchit le widget
    RenderWindow::display();
}
