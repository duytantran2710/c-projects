#ifndef GLOBAL_VARS_H
#define GLOBAL_VARS_H

#define DB_SIZE 54

typedef struct StateRate {
    char state[100];
    float rate;
} StateRate;

const StateRate STATE_RATE_DB[DB_SIZE] = {
    {"NULL", 0.0f}, // default value
    {"Alabama", 4.0f},{"Alaska", 0.0f},{"Arizona", 5.6f},
    {"Arkansas", 6.5f},{"California", 7.25f},{"Colorado", 2.9f},
    {"Columbia", 5.75f},{"Connecticut", 6.35f},{"Delaware", 0.0f},
    {"Florida", 6.0f},{"Georgia", 4.0f},{"Guam", 4.0f},
    {"Hawaii", 4.17f},{"Idaho", 6.0f},{"Illinois", 6.25f},
    {"Indiana", 7.0f},{"Iowa", 6.0f},{"Kansas", 6.5f},
    {"Kentucky", 6.0f},{"Louisiana", 4.45f},{"Maine", 5.5f},
    {"Maryland", 6.0f},{"Massachusetts", 6.25f},{"Michigan", 6.0f},
    {"Minnesota", 6.88f},{"Mississippi", 7.0f},{"Missouri", 4.23f},
    {"Montana", 0.0f},{"Nebraska", 5.5f},{"Nevada", 6.85f},
    {"New Hampshire", 0.0f},{"New Jersey", 6.63f},{"New Mexico", 5.13f},
    {"New York", 4.0f},{"North Carolina", 4.75f},{"North Dakota", 5.0f},
    {"Ohio", 5.75f},{"Oklahoma", 4.5f},{"Oregon", 0.0f},
    {"Pennsylvania", 6.0f},{"Puerto Rico", 10.5f},{"Rhode Island", 7.0f},
    {"South Carolina", 6.0f},{"South Dakota", 4.0f},{"Tennessee", 7.0f},
    {"Texas", 6.25f},{"Utah", 5.95f},{"Vermont", 6.0f},
    {"Virginia", 5.3f},{"Washington", 6.5f},{"West Virginia", 6.0f},
    {"Wisconsin", 5.0f},{"Wyoming", 4.0f}
};

#endif