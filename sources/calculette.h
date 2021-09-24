#ifndef CALCULETTE_H
#define CALCULETTE_H

#include <QWidget>
#include <QMessageBox>
namespace Ui {
class calculette;
}

class calculette : public QWidget
{
    Q_OBJECT

public:
    explicit calculette(QWidget *parent = nullptr);
    ~calculette();

private:
    Ui::calculette *ui;

public slots:
    void on_buttonEgal_clicked();
};

#endif // CALCULETTE_H
