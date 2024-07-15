#include "message.h"

void message::encrypt(std::string messageToEncrypt, int setShift){
    this->setShift = setShift;
    int x = 0;
    //this is to make sure that all letters being used are lowercase and from a to z
    for(int i = 97; i <= 122; i++){
        alpha.push_back(i);
        x++;
    }
    //this will encrypt the message
    for(const auto& letterE : messageToEncrypt){
            for(size_t v = 0; v < alpha.size(); v++){
                int shift = ((1 * v) + setShift) % 26;

                if(letterE == alpha[v]){
                        encryptedMessage.push_back(alpha[shift]);
            }
        }
    }
    //this will make the make the encrypted message into a string and stored within stre
    std::string str(encryptedMessage.begin(), encryptedMessage.end());
    stre = str;
    std::cout << "Encrypted to: " << stre << std::endl;

}
//this will decrypt the message by changing the shift value
void message::decrypt(){
    std::cout << "Decrypted to: ";
    for(const auto& letterD : stre){
            for(size_t v = 0; v < alpha.size(); v++){
                int shift = ((1 * v) - setShift);
                if(shift < 0){shift = 25;}; //this will stop negative shift values from occuring
                if(letterD == alpha[v]){
                        std::cout << alpha[shift];
            }
        }

    }
}
