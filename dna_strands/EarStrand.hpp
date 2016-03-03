#ifndef DEF_EAR_STRAND
#define DEF_EAR_STRAND

#include <string>
#include <vector>

#include "Strand.hpp"
#include "LimbStrand.hpp"

#define EAR_NB_LENGTH 3

class EarStrand : public Strand {
public:
	EarStrand(int limbNb);
	EarStrand(int nbEars, std::vector<bool> locations);

	std::vector<bool> getNumberBin();
	int getNumber();

	std::vector<bool> getLocations();
	std::vector<bool> getLocationOf(int index);
};

#endif