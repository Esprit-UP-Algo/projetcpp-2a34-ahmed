#include "modifier_2.h"
#include "ui_modifier_2.h"

modifier_2::modifier_2(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::modifier_2)
{
    ui->setupUi(this);
}

modifier_2::~modifier_2()
{
    delete ui;
}
