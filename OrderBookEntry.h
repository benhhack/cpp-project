#pragma once

#include <string>

enum class OrderBookType{bid, ask, unknown, bidsale,asksale};



class OrderBookEntry
{
    public:

        OrderBookEntry( double _price,
                        double _amount,
                        std::string _timeStamp,
                        std::string _product,
                        OrderBookType _orderType,
                        std::string username = "dataset");
        static OrderBookType strToOBT(std::string);

        static bool campareByTimestamp(const OrderBookEntry& e1, const OrderBookEntry& e2)
        {
            return e1.timeStamp < e2.timeStamp;
        }
        static bool compareByPriceAsc(OrderBookEntry& e1, OrderBookEntry& e2)
        {
        return e1.price < e2.price;
        }
        static bool compareByPriceDesc(OrderBookEntry& e1, OrderBookEntry& e2)
        {
        return e1.price > e2.price;
        }
        
        double price;
        double amount;
        std::string timeStamp;
        std::string product;
        OrderBookType orderType;
        std::string username;

};