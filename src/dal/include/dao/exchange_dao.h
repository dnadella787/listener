//
// Created by Dhanush Nadella on 8/23/25.
//

#ifndef EXCHANGE_DAO_H
#define EXCHANGE_DAO_H
#include <memory>

#include "../models/exchange.h"
#include <pqxx/connection>

namespace dal::dao {

class ExchangeDao {
public:
    explicit ExchangeDao(std::shared_ptr<pqxx::connection> pg_conn);
    std::unique_ptr<model::Exchange> GetExchange(const std::string& exchange_code) const;
    static constexpr std::string_view ExchangeEntityType = "Exchange";
private:
    std::shared_ptr<pqxx::connection> pg_conn_;
};

}

#endif // EXCHANGE_DAO_H