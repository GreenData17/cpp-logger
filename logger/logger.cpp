#include "logger.h"

void logger::Log(const char* msg){
	if (logLevel < 0) return;
	SendMessage(" LOG   ", msg, 7);
}

void logger::LogWarning(const char* msg){
	if (logLevel < 1) return;
	SendMessage(" WARN  ", msg, 3);
}

void logger::LogError(const char* msg){
	if (logLevel < 2) return;
	SendMessage(" ERROR ", msg, 1);
}

void logger::SendMessage(const char* prefix, const char* msg, int color){
	SetColor(color);
	std::cout << prefix;
	ResetColor();
	std::cout << " " << msg << "\n";
}

void logger::SetColor(int color){
	std::cout << "\033[1;4" << color << "m";
}

void logger::ResetColor(){
	std::cout << resetColor;
}
