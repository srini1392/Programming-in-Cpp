/***************************************************************************************/ 
/*             Name                : LOG_Class.cpp                                     */
/*             Author              : Srinikethan Mankala                               */
/*             Date                : 02-Jun-2021 11:38:31 PM                           */
/***************************************************************************************/


#include <iostream>
using namespace std;

#define LOG(X) std::cout << x << std::endl

class Log{

    //public & private variables
    public:
        enum LogLevel{
            LogLevelError,
            LogLevelWarning,
            LogLevelInformation
            };

        // const int LogLevelError         = 0;
        // const int LogLevelWarning       = 1;
        // const int LogLevelInformation   = 2;

    private:
        int m_LogLevel; //private member variable to hold loglevel



    //public methods
    public:
        void SetLevel(int level){  //SetLevel function
        m_LogLevel = level;
        }

        void Error(const char* message){  //Function for Errors
            if(m_LogLevel >= LogLevelError)
            std::cout << "[ERROR]: " << message << std::endl;

        }

        void Warn(const char* message){ //Function for Warnings
            if(m_LogLevel >= LogLevelWarning)
            std::cout << "[WARNING]: " << message << std::endl;

        }

        void Info(const char* message){  //Function for Information
            if(m_LogLevel >= LogLevelInformation)
            std::cout << "[INFO]: " << message << std::endl;

        }


};


int main(){

    Log log;
    log.SetLevel(log.LogLevelError);
    log.Warn("Hello!");
    log.Error("Hello");
    log.Info("Hello");

    // std::cin.get();
    return 0;
}