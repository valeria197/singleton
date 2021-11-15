#pragma once

#include <QSharedPointer>
#include "abstractcompany.h"

// Синглтон
class CompanyRegistry
{
public:
    static CompanyRegistry& Instance()
    {
        static CompanyRegistry instance;
        return instance;
    }

    void addCompany(const QSharedPointer<AbstractCompany>& company);

    QSharedPointer<AbstractCompany> getCompanyByIndex(int index) const;

    bool replaceCompanyByIndex(int index, const QSharedPointer<AbstractCompany> newCompany);

    int getCompaniesCount() const;

private:
    CompanyRegistry(const CompanyRegistry&)= delete;
    CompanyRegistry& operator=(const CompanyRegistry&) = delete;
    CompanyRegistry(CompanyRegistry&&) = delete;
    CompanyRegistry& operator=(CompanyRegistry&&) = delete;

    CompanyRegistry() {}
    ~CompanyRegistry() {}

private:
    QList<QSharedPointer<AbstractCompany>> companies_;
};
