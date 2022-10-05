#include <iostream>
#include <vector>
#include <string>
#include <ctime>

using namespace std;

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
    n = (uint8_t)((inst & 0b00000000000000000000000001111111) >> 0);
    return opcode;
}

void getOpcode(inst) {
    uint8_t rd;
    n = (uint8_t)((inst & 0b00000000000000000000111110000000) >> 7);
    return rd;
}

void getOpcode(inst) {
    uint8_t fun3;
    n = (uint8_t)((inst & 0b00000000000000000111000000000000) >> 12);
    return rs1;
}

void getOpcode(inst) {
    uint8_t rs1;
    n = (uint8_t)((inst & 0b00000000000011111000000000000000) >> 15);
    return rs1;
}

void getOpcode(inst) {
    uint8_t rs2;
    n = (uint8_t)((inst & 0b00000001111100000000000000000000) >> 20);
    return opcode;
}

void getOpcode(inst) {
    uint8_t fun7;
    n = (uint8_t)((inst & 0b11111110000000000000000000000000) >> 25);
    return fun7;
}

void getOpcode(inst) {
    uint8_t imm11_0;
    n = (uint8_t)((inst & 0b11111111111100000000000000000000) >> 20);
    return imm11_0;
}

void getOpcode(inst) {
    uint8_t imm4_0;
    n = (uint8_t)((inst & 0b00000000000000000000111110000000) >> 7);
    return imm4_0;
}

void getOpcode(inst) {
    uint8_t imm11_5;
    n = (uint8_t)((inst & 0b11111110000000000000000000000000) >> 25);
    return imm11_5;
}

void getOpcode(inst) {
    uint8_t imm11_B;
    n = (uint8_t)((inst & 0b00000000000000000000000010000000) >> 7);
    return imm11_B;
}

void getOpcode(inst) {
    uint8_t imm4_1;
    n = (uint8_t)((inst & 0b00000000000000000000111100000000) >> 8);
    return imm4_1;
}

void getOpcode(inst) {
    uint8_t imm10_5;
    n = (uint8_t)((inst & 0b00111110000000000000000000000000) >> 25);
    return imm10_5;
}

void getOpcode(inst) {
    uint8_t imm12;
    n = (uint8_t)((inst & 0b11000000000000000000000000000000) >> 30);
    return imm12;
}

void getOpcode(inst) {
    uint8_t imm31_12;
    n = (uint8_t)((inst & 0b11111111111111111111000000000000) >> 12);
    return imm31_12;
}

void getOpcode(inst) {
    uint8_t imm19_12;
    n = (uint8_t)((inst & 0b00000000000011111111000000000000) >> 12);
    return imm19_12;
}

void getOpcode(inst) {
    uint8_t imm11_J;
    n = (uint8_t)((inst & 0b00000000000100000000000000000000) >> 20);
    return imm12;
}

void getOpcode(inst) {
    uint8_t imm10_1;
    n = (uint8_t)((inst & 0b01111111111000000000000000000000) >> 21);
    return imm10_1;
}

void getOpcode(inst) {
    uint8_t imm20;
    n = (uint8_t)((inst & 0b10000000000000000000000000000000) >> 31);
    return imm20;
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
