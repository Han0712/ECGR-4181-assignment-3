#include <iostream>
#include <vector>
#include <string>
#include <ctime>

using namespace std;        #test

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

uint8_t getOpcode(uint inst) {
    uint8_t opcode;
    opcode = (uint8_t)((inst & 0b00000000000000000000000001111111) >> 0);
    return opcode;
}

uint8_t  getrd(uint inst) {
    uint8_t rd;
    rd = (uint8_t)((inst & 0b00000000000000000000111110000000) >> 7);
    return rd;
}

uint8_t  getfun3(uint inst) {
    uint8_t fun3;
    fun3 = (uint8_t)((inst & 0b00000000000000000111000000000000) >> 12);
    return fun3;
}

uint8_t  getrs1(uint inst) {
    uint8_t rs1;
    rs1 = (uint8_t)((inst & 0b00000000000011111000000000000000) >> 15);
    return rs1;
}

uint8_t  getrs2(uint inst) {
    uint8_t rs2;
    rs2 = (uint8_t)((inst & 0b00000001111100000000000000000000) >> 20);
    return rs2;
}

uint8_t  getfun7(uint inst) {
    uint8_t fun7;
    fun7 = (uint8_t)((inst & 0b11111110000000000000000000000000) >> 25);
    return fun7;
}

uint8_t getimm11_0(uint inst) {
    uint8_t imm11_0;
    imm11_0 = (uint8_t)((inst & 0b11111111111100000000000000000000) >> 20);
    return imm11_0;
}

uint8_t getimm4_0(uint inst) {
    uint8_t imm4_0;
    imm4_0 = (uint8_t)((inst & 0b00000000000000000000111110000000) >> 7);
    return imm4_0;
}

uint8_t getimm11_5(uint inst) {
    uint8_t imm11_5;
    imm11_5 = (uint8_t)((inst & 0b11111110000000000000000000000000) >> 25);
    return imm11_5;
}

uint8_t getimm11_B(uint inst) {
    uint8_t imm11_B;
    imm11_B = (uint8_t)((inst & 0b00000000000000000000000010000000) >> 7);
    return imm11_B;
}

uint8_t getimm4_1(uint inst) {
    uint8_t imm4_1;
    imm4_1 = (uint8_t)((inst & 0b00000000000000000000111100000000) >> 8);
    return imm4_1;
}

uint8_t getimm10_5(uint inst) {
    uint8_t imm10_5;
    imm10_5 = (uint8_t)((inst & 0b00111110000000000000000000000000) >> 25);
    return imm10_5;
}

uint8_t getimm12(uint inst) {
    uint8_t imm12;
    imm12 = (uint8_t)((inst & 0b11000000000000000000000000000000) >> 30);
    return imm12;
}

uint8_t getimm31_12(uint inst) {
    uint8_t imm31_12;
    imm31_12 = (uint8_t)((inst & 0b11111111111111111111000000000000) >> 12);
    return imm31_12;
}

uint8_t getimm19_12(uint inst) {
    uint8_t imm19_12;
    imm19_12 = (uint8_t)((inst & 0b00000000000011111111000000000000) >> 12);
    return imm19_12;
}

uint8_t getimm11_J(uint inst) {
    uint8_t imm11_J;
    imm11_J = (uint8_t)((inst & 0b00000000000100000000000000000000) >> 20);
    return imm12;
}

uint8_t getimm10_1(uint inst) {
    uint8_t imm10_1;
    imm10_1 = (uint8_t)((inst & 0b01111111111000000000000000000000) >> 21);
    return imm10_1;
}

uint8_t getimm20(uint inst) {
    uint8_t imm20;
    imm20 = (uint8_t)((inst & 0b10000000000000000000000000000000) >> 31);
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

void control() {
    int alu_src;
    int mem_to_reg;
    int reg_write;
    int mem_read;
    int mem_write;
    int branch;
    int alu_op;

};
