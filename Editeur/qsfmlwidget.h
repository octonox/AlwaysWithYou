#ifndef QSFMLWIDGET_H
#define QSFMLWIDGET_H
#include <QTimer>
#include <QWidget>
#include <SFML/Graphics.hpp>

class QSFMLWidget : public QWidget, public sf::RenderWindow
{
    Q_OBJECT
public:
    explicit QSFMLWidget(QWidget *parent, QSize const& size, QPoint const& position, unsigned int frametime = 0);
    virtual ~QSFMLWidget();

protected:
    virtual void OnInit() = 0;

    virtual void OnUpdate() = 0;

    virtual QPaintEngine* paintEngine() const;

    virtual void showEvent(QShowEvent*);

    virtual void paintEvent(QPaintEvent*);

    QTimer m_timer;
    bool m_initialized;
};

#endif // QSFMLWIDGET_H
