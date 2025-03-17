#ifndef _LIBOS_BAR_H_
#define _LIBOS_BAR_H_

#include <string>

#include "libos-solver.h"

class LibosBar final : public LibosSolver {
public:
    explicit LibosBar(std::string datafile);
    ~LibosBar() = default;
};

#endif // _LIBOS_BAR_H_




