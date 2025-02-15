#pragma once

#include "AbstractGenerator.h"

class TextGenerator final
        : public AbstractGenerator
{
    using AbstractGenerator::AbstractGenerator;

public:
    void generate(QIODevice &output, const ScName &stmName) override;

private:
    ScName hlText(const ScName &name) const;
};
