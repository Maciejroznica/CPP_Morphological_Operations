#ifndef DYLATACJA_H
#define DYLATACJA_H
#include "Przeksztalcenie.h"

class Dylatacja : public Przeksztalcenie
{
public:
	void przeksztalc(Bitmapa&) override;
};

#endif
