// OperationTypes.h
#ifndef OPERATION_TYPES_H
#define OPERATION_TYPES_H

#include <unordered_map>
#include <string>

std::unordered_map<std::string, std::string> type_map = {
    {"add", "R"},
    {"sub", "R"},
    {"sll", "R"},
    {"srl", "R"},
    {"sra", "R"},
    {"or", "R"},
    {"and", "R"},
    {"mul", "R"},
    {"lr.d", "R"},
    {"sc.d", "R"},
    {"lb", "I"},
    {"ld", "I"},
    {"lh", "I"},
    {"iw", "I"},
    {"id", "I"},
    {"ibu", "I"},
    {"ihu", "I"},
    {"addi", "I"},
    {"xori", "I"},
    {"srli", "I"},
    {"ori", "I"},
    {"andi", "I"},
    {"jalr", "I"},
    {"srai", "I"},
    {"slli", "I"},
    {"srli", "I"},
    {"sb", "S"},
    {"sh", "S"},
    {"sw", "S"},
    {"sd", "S"},
    {"beq", "SB"},
    {"bne", "SB"},
    {"blt", "SB"},
    {"bge", "SB"},
    {"bltu", "SB"},
    {"bgeu", "SB"},
    {"lui", "U"},
    {"jal", "UJ"}
};

#endif // OPERATION_TYPES_H
