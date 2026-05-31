#ifndef ZEROWANIE_H
#define ZEROWANIE_H
#include "Przeksztalcenie.h"

class Zerowanie : public Przeksztalcenie
{
public:
	void przeksztalc(Bitmapa&) override;
};

#endif
