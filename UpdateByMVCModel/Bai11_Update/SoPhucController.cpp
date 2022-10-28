#include "SoPhucController.h"

SoPhucController::SoPhucController()
{

}
SoPhucController::~SoPhucController()
{

}
void SoPhucController::tong2SoPhuc()
{
    int sumReal, sumComp;
    SoPhuc* sp1 = new SoPhuc(m_sophucIO.inputSoPhuc());
    m_sophucIO.printSoPhuc(sp1->getReal(), sp1->getComp());
    SoPhuc* sp2 = new SoPhuc(m_sophucIO.inputSoPhuc());
    m_sophucIO.printSoPhuc(sp2->getReal(), sp2->getComp());
    sumReal = sp1->getReal() + sp2->getReal();
    sumComp = sp1->getComp() + sp2->getComp();
    m_sophucIO.printAdd(sumReal, sumComp);
}
void SoPhucController::hieu2SoPhuc()
{
    int subReal, subComp;
    SoPhuc* sp1 = new SoPhuc(m_sophucIO.inputSoPhuc());
    m_sophucIO.printSoPhuc(sp1->getReal(), sp1->getComp());
    SoPhuc* sp2 = new SoPhuc(m_sophucIO.inputSoPhuc());
    m_sophucIO.printSoPhuc(sp2->getReal(), sp2->getComp());
    subReal = sp1->getReal() - sp2->getReal();
    subComp = sp1->getComp() - sp2->getComp();
    m_sophucIO.printSub(subReal, subComp);
}
void SoPhucController::nhan2SoPhuc()
{
    int mulReal, mulComp;
    SoPhuc* sp1 = new SoPhuc(m_sophucIO.inputSoPhuc());
    m_sophucIO.printSoPhuc(sp1->getReal(), sp1->getComp());
    SoPhuc* sp2 = new SoPhuc(m_sophucIO.inputSoPhuc());
    m_sophucIO.printSoPhuc(sp2->getReal(), sp2->getComp());
    mulReal = (sp1->getReal())*(sp2->getReal()) - (sp1->getComp())*(sp2->getComp());
    mulComp = (sp1->getReal())*(sp2->getComp()) - (sp1->getComp())*(sp2->getReal());
    m_sophucIO.printMulti(mulReal, mulComp);
}