#ifndef FENETRE_HPP
#define FENETRE_HPP

#include <QWidget>
#include <QLineEdit>

class QPushButton;
class Fenetre : public QWidget {
    public :
        Fenetre(QWidget * parent = nullptr);

    public slots:
        void on_boutonplus_clicked();
        void on_boutonmoins_clicked();
        void on_boutondivise_clicked();
        void on_boutonfois_clicked();
        void on_boutonegal_clicked();
        void on_bouton0_clicked();
        void on_boutonvirgule_clicked();
        void on_boutonjsp_clicked();
        void on_bouton3_clicked();
        void on_bouton6_clicked();
        void on_bouton9_clicked();
        void on_boutonclear_clicked();
        void on_boutoneffacer_clicked();
        void on_bouton4_clicked();
        void on_bouton5_clicked();
        void on_bouton7_clicked();
        void on_bouton8_clicked();
        void on_bouton1_clicked();
        void on_bouton2_clicked();

    private :
        QLineEdit *lineEdit;

        QPushButton * m_boutonplus;
        QPushButton * m_boutonmoins;
        QPushButton * m_boutondivise;
        QPushButton * m_boutonfois;
        QPushButton * m_boutonegal;
        QPushButton * m_bouton0;
        QPushButton * m_boutonvirgule;
        QPushButton * m_boutonjsp;
        QPushButton * m_bouton3;
        QPushButton * m_bouton2;
        QPushButton * m_bouton1;
        QPushButton * m_bouton6;
        QPushButton * m_bouton5;
        QPushButton * m_bouton4;
        QPushButton * m_bouton9;
        QPushButton * m_bouton8;
        QPushButton * m_bouton7;
        QPushButton * m_boutonclear;
        QPushButton * m_boutoneffacer;


};
#endif
