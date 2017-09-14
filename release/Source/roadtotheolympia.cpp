#include "roadtotheolympia.h"
#include "ui_roadtotheolympia.h"
#include "globals.h"

#include <QMessageBox>
#include <QDateTime>
#include <QTime>
#include <QAxWidget>
#include <ActiveQt>

    QDateTime RealTime;
    QTime SetTimePoint;
RoadtotheOlympia::RoadtotheOlympia(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RoadtotheOlympia)
{
    ui->setupUi(this);
    showMaximized();
    setWindowFlags(Qt::Window);
    ui->label_Name_Student_1->setText(NameStudent1);
    ui->label_Name_Student_2->setText(NameStudent2);
    ui->label_Name_Student_3->setText(NameStudent3);
    ui->label_Name_Student_4->setText(NameStudent4);
}

RoadtotheOlympia::~RoadtotheOlympia()
{
    delete ui;
}

void RoadtotheOlympia::on_pushButton_StartTime_clicked()
{
    SetTimePoint = RealTime.currentDateTime().time();
    ui->textEdit_Answer_Student_1->clear();
    ui->textEdit_Answer_Student_2->clear();
    ui->textEdit_Answer_Student_3->clear();
    ui->textEdit_Answer_Student_4->clear();
    ui->label_Time_Student_1->setText("00.000");
    ui->label_Time_Student_2->setText("00.000");
    ui->label_Time_Student_3->setText("00.000");
    ui->label_Time_Student_4->setText("00.000");
}

void RoadtotheOlympia::on_pushButton_Student_1_clicked()
{
  //  QMessageBox::critical(this,"Lỗi",outDirStudent1);
    QAxWidget* WordDocument=new QAxWidget ("Word.Document", this-> ui->textEdit_Answer_Student_1);
    WordDocument-> setGeometry (QRect (0, 0, 1000, 1000));
    WordDocument->setControl (outDirStudent1);
    WordDocument-> show ();
    QFileInfo AnswerFile(outDirStudent1);
    int millisecs = SetTimePoint.msecsTo(AnswerFile.lastModified().time());
    if (millisecs > 30000) ui->label_Time_Student_1->setText("Quá thời gian");
    else
    ui->label_Time_Student_1->setText( // QString::fromStdString(std::to_string(millisecs)) + " vs " +
                                        QString::fromStdString(std::to_string(millisecs/1000)) + "." + QString::fromStdString(std::to_string(millisecs - (millisecs/1000)*1000 )));
}

void RoadtotheOlympia::on_pushButton_Student_2_clicked()
{
    QAxWidget* WordDocument=new QAxWidget ("Word.Document", this-> ui->textEdit_Answer_Student_2);
    WordDocument-> setGeometry (QRect (0, 0, 1000, 1000));
    WordDocument->setControl (outDirStudent2);
    WordDocument-> show ();
    QFileInfo AnswerFile(outDirStudent2);
    int millisecs = SetTimePoint.msecsTo(AnswerFile.lastModified().time());
    if (millisecs > 30000) ui->label_Time_Student_2->setText("Quá thời gian");
    else
    ui->label_Time_Student_2->setText( // QString::fromStdString(std::to_string(millisecs)) + " vs " +
                                        QString::fromStdString(std::to_string(millisecs/1000)) + "." + QString::fromStdString(std::to_string(millisecs - (millisecs/1000)*1000 )));
}

void RoadtotheOlympia::on_pushButton_Student_3_clicked()
{
    QAxWidget* WordDocument=new QAxWidget ("Word.Document", this-> ui->textEdit_Answer_Student_3);
    WordDocument-> setGeometry (QRect (0, 0, 1000, 1000));
    WordDocument->setControl (outDirStudent3);
    WordDocument-> show ();
    QFileInfo AnswerFile(outDirStudent3);
    int millisecs = SetTimePoint.msecsTo(AnswerFile.lastModified().time());
    if (millisecs > 30000) ui->label_Time_Student_3->setText("Quá thời gian");
    else
    ui->label_Time_Student_3->setText( // QString::fromStdString(std::to_string(millisecs)) + " vs " +
                                        QString::fromStdString(std::to_string(millisecs/1000)) + "." + QString::fromStdString(std::to_string(millisecs - (millisecs/1000)*1000 )));
}

void RoadtotheOlympia::on_pushButton_Student_4_clicked()
{
    QAxWidget* WordDocument=new QAxWidget ("Word.Document", this-> ui->textEdit_Answer_Student_4);
    WordDocument-> setGeometry (QRect (0, 0, 1000, 1000));
    WordDocument->setControl (outDirStudent4);
    WordDocument-> show ();
    QFileInfo AnswerFile(outDirStudent4);
    int millisecs = SetTimePoint.msecsTo(AnswerFile.lastModified().time());
    if (millisecs > 30000) ui->label_Time_Student_4->setText("Quá thời gian");
    else
    ui->label_Time_Student_4->setText( // QString::fromStdString(std::to_string(millisecs)) + " vs " +
                                        QString::fromStdString(std::to_string(millisecs/1000)) + "." + QString::fromStdString(std::to_string(millisecs - (millisecs/1000)*1000 )));
}
