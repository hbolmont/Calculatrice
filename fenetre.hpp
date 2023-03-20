#ifndef FENETRE_HPP
#define FENETRE_HPP

#include <QWidget>

class QPushButton;
class Fenetre : public QWidget {
    public :
        Fenetre(QWidget * parent = nullptr);

    private :
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
