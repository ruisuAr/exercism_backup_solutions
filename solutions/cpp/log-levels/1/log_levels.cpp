#include <string>

namespace log_line {
    std::string message(std::string line) {
        int messagePosition = line.find(":");
        return line.substr(messagePosition + 2);
    }
    
    std::string log_level(std::string line) {
        int logPosition = line.find("[");
        int logEndPosition = line.find("]");
        return line.substr(logPosition + 1, logEndPosition - 1);
    }
    
    std::string reformat(std::string line) {
        int messagePosition = line.find(":");
        int logPosition = line.find("[");
        int logEndPosition = line.find("]");

        std::string message = line.substr(messagePosition + 2);
        std::string logLevel = line.substr(logPosition + 1, logEndPosition - 1);

        std::string messageReformat{message + " (" + logLevel + ")"};
        return messageReformat;
    }
}  // namespace log_line
