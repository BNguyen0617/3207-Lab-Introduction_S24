//
// Created by Brian Nguyen on 1/17/24.
#include "random.h"

char randchar() {
    return (rand() % 26) + 'A';// this will return a random letter a through z
}