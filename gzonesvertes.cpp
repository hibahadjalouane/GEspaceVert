#include "gzonesvertes.h"
#include "ui_gzonesvertes.h"

GZonesvertes::GZonesvertes(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::GZonesvertes)
{
    ui->setupUi(this);
}

GZonesvertes::~GZonesvertes()
{
    delete ui;
}
