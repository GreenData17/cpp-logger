#include <iostream>
#include <string.h>

class logger{
public:
	enum LogLevel {infoLevel, warningLevel, errorLevel};
	LogLevel logLevel = infoLevel;
private:
	const char* resetColor = "\033[0;1m";
	
public:
	void Log(const char* msg);
	void LogWarning(const char* msg);
	void LogError(const char* msg);
private:
	void ResetColor();
	void SetColor(int color);
	void SendMessage(const char* prefix, const char* msg, int color);
};
