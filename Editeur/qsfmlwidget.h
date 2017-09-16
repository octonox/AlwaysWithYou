#ifndef QSFMLWIDGET_H
#define QSFMLWIDGET_H
#include <QObject>
#include <QTimer>
#include <QWidget>
#include <SFML/Graphics.hpp>

class QSFMLWidget : public QWidget, public sf::RenderWindow
{
    Q_OBJECT
public:
    explicit QSFMLWidget(QWidget *parent = nullptr);
    virtual ~QSFMLWidget();

protected:
    virtual void OnInit() = 0;

    virtual void OnUpdate() = 0;

    virtual QPaintEngine* paintEngine() const;

    virtual void showEvent(QShowEvent* event);

    virtual void paintEvent(QPaintEvent* event);

    QTimer m_timer;
    bool m_initialized;
};

#endif // QSFMLWIDGET_H
