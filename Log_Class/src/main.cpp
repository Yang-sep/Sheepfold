#include <iostream>

class Log
{
public:
	const int LogLevelError = 0;
	const int LogLevelWaring = 1;
	const int LogLevelInfo = 2;

private:
	int m_LogLevel = LogLevelInfo;

public:
	void SetLogLevel(int LogLevel)
	{
		m_LogLevel = LogLevel;
	}

	void Error(const char* message)
	{
		if (m_LogLevel >= LogLevelError)
			std::cout << "[Error]:" << message << std::endl;
	}

	void Waring(const char* message)
	{
		if (m_LogLevel >= LogLevelWaring)
			std::cout << "[Waring]:" << message << std::endl;
	}

	void Info(const char* message)
	{
		if (m_LogLevel >= LogLevelInfo)
			std::cout << "[Info]:" << message << std::endl;
	}
};



int main()
{
	Log logs;
	logs.SetLogLevel(logs.LogLevelWaring);
	logs.Error("Hello!");
	logs.Waring("Hello!");
	logs.Info("Hello!");

	std::cin.get();
}