#include "fenetre.hpp"
#include <QPushButton>
#include <QLineEdit>


Fenetre::Fenetre(QWidget *parent) : QWidget(parent), lineEdit(nullptr)
{
    setFixedSize(600, 800);

    lineEdit = new QLineEdit(this);

    lineEdit->setPlaceholderText("");
    lineEdit->setReadOnly(true);
    lineEdit->setGeometry(150, 150, 300, 60);


    m_boutonegal = new QPushButton("=", this);
    m_boutonegal->setGeometry(530, 700, 60, 60);

    m_boutonmoins = new QPushButton("-", this);
    m_boutonmoins->setGeometry(530, 630, 60, 60);

    m_boutonfois = new QPushButton("x", this);
    m_boutonfois->setGeometry(530, 560, 60, 60);

    m_boutondivise = new QPushButton("/", this);
    m_boutondivise->setGeometry(530, 490, 60, 60);

    m_boutonplus = new QPushButton("+", this);
    m_boutonplus->setGeometry(530, 420, 60, 60);

    m_boutonjsp = new QPushButton("jsp", this);
    m_boutonjsp->setGeometry(460, 700, 60, 60);

    m_boutonvirgule = new QPushButton(".", this);
    m_boutonvirgule->setGeometry(390, 700, 60, 60);

    m_bouton0 = new QPushButton("0", this);
    m_bouton0->setGeometry(320, 700, 60, 60);

    m_bouton3= new QPushButton("3", this);
    m_bouton3->setGeometry(460, 630, 60, 60);

    m_bouton2 = new QPushButton("2", this);
    m_bouton2->setGeometry(390, 630, 60, 60);

    m_bouton1 = new QPushButton("1", this);
    m_bouton1->setGeometry(320, 630, 60, 60);

    m_bouton6 = new QPushButton("6", this);
    m_bouton6->setGeometry(460, 560, 60, 60);

    m_bouton5 = new QPushButton("5", this);
    m_bouton5->setGeometry(390, 560, 60, 60);

    m_bouton4 = new QPushButton("4", this);
    m_bouton4->setGeometry(320, 560, 60, 60);

    m_bouton9 = new QPushButton("9", this);
    m_bouton9->setGeometry(460, 490, 60, 60);

    m_bouton8 = new QPushButton("8", this);
    m_bouton8->setGeometry(390, 490, 60, 60);

    m_bouton7 = new QPushButton("7", this);
    m_bouton7->setGeometry(320, 490, 60, 60);

    m_boutonclear = new QPushButton("Clear", this);
    m_boutonclear->setGeometry(320, 420, 130, 60);

    m_boutoneffacer= new QPushButton("Effacer", this);
    m_boutoneffacer->setGeometry(460, 420, 60, 60);


    QObject::connect(m_bouton1, &QPushButton::released, this, &Fenetre::on_bouton1_clicked);
    QObject::connect(m_bouton2, &QPushButton::released, this, &Fenetre::on_bouton2_clicked);
    QObject::connect(m_bouton3, &QPushButton::released, this, &Fenetre::on_bouton3_clicked);
    QObject::connect(m_bouton4, &QPushButton::released, this, &Fenetre::on_bouton4_clicked);
    QObject::connect(m_bouton5, &QPushButton::released, this, &Fenetre::on_bouton5_clicked);
    QObject::connect(m_bouton6, &QPushButton::released, this, &Fenetre::on_bouton6_clicked);
    QObject::connect(m_bouton7, &QPushButton::released, this, &Fenetre::on_bouton7_clicked);
    QObject::connect(m_bouton8, &QPushButton::released, this, &Fenetre::on_bouton8_clicked);
    QObject::connect(m_bouton9, &QPushButton::released, this, &Fenetre::on_bouton9_clicked);
    QObject::connect(m_bouton0, &QPushButton::released, this, &Fenetre::on_bouton0_clicked);

    QObject::connect(m_boutonclear, &QPushButton::released, this, &Fenetre::on_boutonclear_clicked);
    QObject::connect(m_boutoneffacer, &QPushButton::released, this, &Fenetre::on_boutoneffacer_clicked);

    QObject::connect(m_boutonplus, &QPushButton::released, this, &Fenetre::on_boutonplus_clicked);
    QObject::connect(m_boutonmoins, &QPushButton::released, this, &Fenetre::on_boutonmoins_clicked);
    QObject::connect(m_boutondivise, &QPushButton::released, this, &Fenetre::on_boutondivise_clicked);
    QObject::connect(m_boutonfois, &QPushButton::released, this, &Fenetre::on_boutonfois_clicked);
    QObject::connect(m_boutonegal, &QPushButton::released, this, &Fenetre::on_boutonegal_clicked);
    QObject::connect(m_boutonvirgule, &QPushButton::released, this, &Fenetre::on_boutonvirgule_clicked);


}

void Fenetre::on_bouton1_clicked() {
    QString current_text = lineEdit->text();
    lineEdit->setText(current_text + "1");
}

void Fenetre::on_bouton2_clicked() {
    QString current_text = lineEdit->text();
    lineEdit->setText(current_text + "2");
}

void Fenetre::on_bouton3_clicked() {
    QString current_text = lineEdit->text();
    lineEdit->setText(current_text + "3");
}

void Fenetre::on_bouton4_clicked() {
    QString current_text = lineEdit->text();
    lineEdit->setText(current_text + "4");
}

void Fenetre::on_bouton5_clicked() {
    QString current_text = lineEdit->text();
    lineEdit->setText(current_text + "5");
}

void Fenetre::on_bouton6_clicked() {
    QString current_text = lineEdit->text();
    lineEdit->setText(current_text + "6");
}

void Fenetre::on_bouton7_clicked() {
    QString current_text = lineEdit->text();
    lineEdit->setText(current_text + "7");
}

void Fenetre::on_bouton8_clicked() {
    QString current_text = lineEdit->text();
    lineEdit->setText(current_text + "8");
}

void Fenetre::on_bouton9_clicked() {
    QString current_text = lineEdit->text();
    lineEdit->setText(current_text + "9");
}

void Fenetre::on_bouton0_clicked() {
    QString current_text = lineEdit->text();
    lineEdit->setText(current_text + "0");
}

void Fenetre::on_boutonplus_clicked() {
    QString current_text = lineEdit->text();
    lineEdit->setText(current_text + "+");
}

void Fenetre::on_boutonclear_clicked() {
    QString current_text = lineEdit->text();
    lineEdit->setText("");
}

void Fenetre::on_boutoneffacer_clicked() {
    QString current_text = lineEdit->text();
    current_text.chop(1);
    lineEdit->setText(current_text);
}

void Fenetre::on_boutonmoins_clicked() {
    QString current_text = lineEdit->text();
    lineEdit->setText(current_text + "-");
}

void Fenetre::on_boutondivise_clicked() {
    QString current_text = lineEdit->text();
    lineEdit->setText(current_text + "/");
}

void Fenetre::on_boutonfois_clicked() {
    QString current_text = lineEdit->text();
    lineEdit->setText(current_text + "x");
}

void Fenetre::on_boutonegal_clicked() {
    QString current_text = lineEdit->text();
    lineEdit->setText(current_text + "=");
}

void Fenetre::on_boutonvirgule_clicked() {
    QString current_text = lineEdit->text();
    lineEdit->setText(current_text + ".");
}
void Fenetre::boutonClicked() {
    QPushButton *button = (QPushButton *)sender();
    QString buttonValue = button->text();
}
