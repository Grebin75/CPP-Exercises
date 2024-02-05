#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <iomanip>

void calcBTC(char *file);
void checkLine(std::string line);
std::map<std::string, float> readBase(std::map<std::string, float>& BTC);
void checkDate(int Y, int M, int D, std::string line);
bool isLeap(int Year);
void calc(std::string date, double Value);
#endif