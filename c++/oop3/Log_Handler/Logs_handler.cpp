#include <fstream>
#include <iostream>
#include <string>
#include <vector>
class Lev
{
public:
    enum Level{
        debug,
        info,
        warning,
        error
    };


    static std::string getMessagePrfix(Level level)
    {
        switch (level) {
            case debug:
                return "[DEBUG]  ";
            case info:
                return "[INFO]  ";
            case warning:
                return "[WARNING]  ";
            case error:
                return "[ERROR]  ";
            default:
                return "";    
        
        }
    }
};

class LOG:Lev{
public:
    LOG(Level level): level(level){}

    template <typename T>
    LOG& operator<<(const T& str)
    {
        std::string logMessage = Lev::getMessagePrfix(level)+str;

        buffer.push_back(logMessage);

        return *this;
    }

    static LOG Level(Level level)
    {
        return LOG(level);
    }
    static void Dump(){
        std::ofstream file("log.txt");
        if (file.is_open()) {
            for (const std::string& str : buffer) {
                file << str << std::endl;
            }
            file.close();
        }
    }
    static void Clear()
    {
        buffer.clear();
    }
    

private:
    Lev::Level level;
    static std::vector<std::string> buffer;

};

std::vector<std::string> LOG::buffer;

int main()
{
    LOG::Level(Lev::warning)<<"Forgot to close file.";
    LOG::Dump();
    LOG::Clear();

    return 0;
}