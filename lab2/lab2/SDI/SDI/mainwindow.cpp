#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "Person.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , currentPerson(nullptr)
{
    ui->setupUi(this);
    connect(ui->pushButtonCreate, &QPushButton::clicked, this, &MainWindow::createObject);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete currentPerson;
}

void MainWindow::on_pushButton_clicked()
{
    QString name = ui->lineEditName->text();
    int age = ui->lineEditAge->text().toInt();

    if(name.isEmpty() || ui->lineEditAge->text().isEmpty()) {
        QMessageBox::warning(this, "Помилка", "Будь ласка, заповніть усі поля!");
        return;
    }

    delete currentPerson;
    currentPerson = new Person(name, age);

    QMessageBox::information(this, "Об’єкт створено", currentPerson->toString());
}
