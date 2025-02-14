void findHeaderInResponse_harness() {
    const uint8_t *pBuffer;
    size_t bufferLen = nondet_uint();
    const char *pField;
    size_t fieldLen = nondet_uint();
    const char **pValueLoc;
    size_t *pValueLen;

    __CPROVER_assume(bufferLen > 0);
    __CPROVER_assume(pBuffer != NULL);
    __CPROVER_assume(pField != NULL);
    __CPROVER_assume(fieldLen > 0);
    __CPROVER_assume(pValueLoc != NULL);
    __CPROVER_assume(pValueLen != NULL);

    findHeaderInResponse(pBuffer, bufferLen, pField, fieldLen, pValueLoc, pValueLen);
}
