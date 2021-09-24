#include "calculette.h"
#include "ui_calculette.h"

calculette::calculette(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::calculette)
{
    ui->setupUi(this);
}

calculette::~calculette()
{
    delete ui;
}

void calculette::on_buttonEgal_clicked()
{
    if(ui->signe->currentText() == "+")
    {
        ui->labelRes->setText(QString::number(ui->nombreGauche->value() + ui->nombreDroite->value()));
    }

    else if (ui->signe->currentText() == "-")
    {
        ui->labelRes->setText(QString::number(ui->nombreGauche->value() - ui->nombreDroite->value()));
    }

    else if (ui->signe->currentText() == "*")
    {
        ui->labelRes->setText(QString::number(ui->nombreGauche->value() * ui->nombreDroite->value()));
    }

    else if (ui->signe->currentText() == "/")
    {
        if(ui->nombreDroite->value() == 0)
        {
            QMessageBox::critical(this, "DIVISON PAR ZERO", "Divison par 0 à proscrire");
            return;
        }
        ui->labelRes->setText(QString::number(ui->nombreGauche->value() / ui->nombreDroite->value()));
    }
}


