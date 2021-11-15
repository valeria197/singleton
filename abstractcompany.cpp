#include "abstractcompany.h"
#include <stdexcept>

QStringList AbstractCompany::CompanyTypeNames ={
    "HEAVY_INDUSTRY_COMPANY_TYPE",
    "AGRICULTURAL_COMPANY_TYPE",
    "OIL_COMPANY_TYPE",
    "FISHING_COMPANY_TYPE",
    "IT_COMPANY_TYPE",
    "GOVERNMENT_COMPANY_TYPE",
    "FINANCIAL_COMPANY_TYPE"
};

AbstractCompany::AbstractCompany(const QString &name)
    : companyName(name)
    , companyIncome(0.)
    , companyArea(0.)
    , employeeNumber(0)
{ }

QString AbstractCompany::getCompanyName() const
{
    return companyName;
}

void AbstractCompany::setCompanyName(const QString &value)
{
    if (value.isEmpty()) {
        throw std::runtime_error("error: company name empty");
    }
    companyName = value;
}

QList<QString> AbstractCompany::getOwners() const
{
    return owners;
}

void AbstractCompany::setOwners(const QList<QString> &value)
{
    if (value.empty()) {
        throw std::runtime_error("error: company with no owners");
    }
    owners = value;
}

double AbstractCompany::getCompanyIncome() const
{
    return companyIncome;
}

void AbstractCompany::setCompanyIncome(double value)
{
    companyIncome = value;
}

double AbstractCompany::getCompanyArea() const
{
    return companyArea;
}

void AbstractCompany::setCompanyArea(double value)
{
    companyArea = value;
}

int AbstractCompany::getEmployeeNumber() const
{
    return employeeNumber;
}

void AbstractCompany::setEmployeeNumber(int value)
{
    if (value <= 0) {
        throw std::runtime_error("error: employee number <= 0");
    }
    employeeNumber = value;
}
