#include "bank_DB.h"

void BankDB::get_balance_from_db()
{
    balance = rand() % 10000 + 1;
}