#pragma once

#include <QObject>
#include <QString>
#include <QList>

class AbstractCompany
{
public:
    enum CompanyType
    {
        HEAVY_INDUSTRY_COMPANY_TYPE = 1,
        AGRICULTURAL_COMPANY_TYPE,
        OIL_COMPANY_TYPE,
        FISHING_COMPANY_TYPE,
        IT_COMPANY_TYPE,
        GOVERNMENT_COMPANY_TYPE,
        FINANCIAL_COMPANY_TYPE,
        COMPANY_TYPE_COUNT
    };
    static QStringList CompanyTypeNames;

    explicit AbstractCompany(const QString& name);

    virtual ~AbstractCompany() {}

    virtual CompanyType getCompanyType() const = 0;

    virtual double getMonthlyTaxes() const = 0;

    QString getCompanyName() const;
    void setCompanyName(const QString &value);

    QList<QString> getOwners() const;
    void setOwners(const QList<QString> &value);

    double getCompanyIncome() const;
    void setCompanyIncome(double value);

    double getCompanyArea() const;
    void setCompanyArea(double value);

    int getEmployeeNumber() const;
    void setEmployeeNumber(int value);

protected:
    QString companyName;
    QList<QString> owners;
    double companyIncome;
    double companyArea;
    int employeeNumber;
};
