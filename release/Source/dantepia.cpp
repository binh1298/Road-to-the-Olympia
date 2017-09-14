#include "dantepia.h"
#include "ui_dantepia.h"
#include "roadtotheolympia.h"
#include "globals.h"
#include <QString>
#include <QDir>
#include <QFileDialog>

    QDir outlocation("C:/");

DantePia::DantePia(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DantePia)
{
    ui->setupUi(this);
    outDirStudent1="C:/";
    outDirStudent2="C:/";
    outDirStudent3="C:/";
    outDirStudent4="C:/";
}

DantePia::~DantePia()
{
    delete ui;
}

void DantePia::on_pushButton_Student1_clicked()
{
    QString filename = QFileDialog::getExistingDirectory(this,"Chọn thư mục của thí sinh 1", outlocation.absolutePath());
    outDirStudent1 = filename + "/Ketqua.docx";
    ui->label_1->setText(outDirStudent1);
}

void DantePia::on_pushButton_Student2_clicked()
{
    QString filename = QFileDialog::getExistingDirectory(this,"Chọn thư mục của thí sinh 2", outlocation.absolutePath());
    outDirStudent2 = filename + "/Ketqua.docx";
    ui->label_2->setText(outDirStudent2);
}

void DantePia::on_pushButton_Student3_clicked()
{
    QString filename = QFileDialog::getExistingDirectory(this,"Chọn thư mục của thí sinh 3", outlocation.absolutePath());
    outDirStudent3 = filename + "/Ketqua.docx";
    ui->label_3->setText(outDirStudent3);
}

void DantePia::on_pushButton_Student4_clicked()
{
    QString filename = QFileDialog::getExistingDirectory(this,"Chọn thư mục của thí sinh 4", outlocation.absolutePath());
    outDirStudent4 = filename + "/Ketqua.docx";
    ui->label_4->setText(outDirStudent4);
}

void DantePia::on_pushButton_Start_clicked()
{
    NameStudent1 = ui->lineEdit_Student_1->text();
    NameStudent2 = ui->lineEdit_Student_2->text();
    NameStudent3 = ui->lineEdit_Student_3->text();
    NameStudent4 = ui->lineEdit_Student_4->text();
    RoadtotheOlympia DialogRttO;
    DialogRttO.setModal(true);
    DialogRttO.exec();
}
