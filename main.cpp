#include "logger/logger.h"

int main(){
	logger l;

	l.logLevel = l.infoLevel;

	l.Log("Hello Logging World!");
	l.LogWarning("Hello Warning World!");
	l.LogError("Hello Error World!");
}
