#include <iostream>
#include <vector>
#include <string>
#include <ctime>

using namespace std;           #test

enum class opcode_type {
    Rtype,
    Itype,
    Stype,
    Btype,
    Utype,
    Jtype,
};

string print_opcode_type(opcode_type) {
    switch (opcode_type)
    {
    case opcode_type::Rtype: return "Rtype"
    case opcode_type::Itype: return "Itype"
    case opcode_type::Stype: return "Stype"
    case opcode_type::Btype: return "Btype"
    case opcode_type::Utype: return "Utype"
    case opcode_type::Jtype: return "Jtype"
    default: {}
    }
    return "none"

}

void getOpcode(inst) {
    uint8_t opcode;
    n = (uint8_t)((inst & 0b000000000000000000000000001111111) >> 0);
    return opcode;
}

void getOpcode(inst) {
    uint8_t rd;
    n = (uint8_t)((inst & 0b000000000000000000000111110000000) >> 7);
    return rd;
}

void getOpcode(inst) {
    uint8_t fun3;
    n = (uint8_t)((inst & 0b000000000000000000111000000000000) >> 12);
    return rs1;
}

void getOpcode(inst) {
    uint8_t rs1;
    n = (uint8_t)((inst & 0b0000000000000111110000000000000000) >> 15);
    return rs1;
}

void getOpcode(inst) {
    uint8_t rs2;
    n = (uint8_t)((inst & 0b000000000000000000000000001111111) >> 0);
    return opcode;
}

void getOpcode(inst) {
    uint8_t opcode;
    n = (uint8_t)((inst & 0b000000000000000000000000001111111) >> 0);
    return opcode;
}

void check_type(opcode) {
    string  rtype_list[]
        = { "add", "addw", "sub", "subw", "mul", "mulw", "mulh", "mulhsu", "mulhu", "div", "divu", "rem", "remu",
        "divw", "divuw", "remw", "remuw", "and", "or", "xor", "sll", "srl", "sra", "sllw", "srkw", "sraw" };
    string ityp_list[]
        = { "lb", "lbu", "lh", "lhu", "lw", "lwu", "ld", "flw", "fld", "addi", "addiw", "andi", "ori", "xori",
        "slli", "srli", "sra", "slliw", "srliw", "sraiw", "jalr" };
    string stype_list[]
        = { "sb", "sh", "sw", "sd", "fsw", "fsd" };
    string btype_list[]
        = { "beq", "bne", "blt", "bge", "bltu", "bgeu" };
    string utype_list[]
        = { "lui", "auipc" };
    string jtype_list[]
        = { "jal" };

}

void split(input) {
    string inputBit = input;

}

void control() {
    int alu_src;
    int mem_to_reg;
    int reg_write;
    int mem_read;
    int mem_write;
    int branch;
    int alu_op;

};
