#include "Transaction.h"
#include "Utilities.h"
#include <fstream>

void TransactionDumpInfo(const Transaction& transaction, ofstream& file) {
    file << "Sender Name: " << transaction.sender << "\n";
    file << "Receiver Name: " << transaction.receiver << "\n";
    file << "Transaction Value: " << transaction.value << "\n";
}

string TransactionHashedMessage(const Transaction& transaction) {
    return hash(transaction.value , transaction.receiver ,transaction.sender );
}

bool TransactionVerifyHashedMessage(const Transaction& transaction,string hashedMessage) {
    return TransactionHashedMessage(transaction) == hashedMessage;
}