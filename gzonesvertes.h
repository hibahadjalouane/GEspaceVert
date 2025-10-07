#ifndef GZONESVERTES_H
#define GZONESVERTES_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class GZonesvertes;
}
QT_END_NAMESPACE

class GZonesvertes : public QMainWindow
{
    Q_OBJECT

public:
    GZonesvertes(QWidget *parent = nullptr);
    ~GZonesvertes();

private:
    Ui::GZonesvertes *ui;
};
#endif // GZONESVERTES_H
