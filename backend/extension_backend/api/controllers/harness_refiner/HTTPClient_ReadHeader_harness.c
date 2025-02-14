void HTTPClient_ReadHeader_harness() {
    HTTPResponse_t response;
    const char *pField;
    const char **pValueLoc;
    size_t *pValueLen;

    // Nondeterministic values
    response.pBuffer = (const uint8_t *)nondet_uint();  // Simulating pointer
    response.bufferLen = nondet_uint();
    pField = (const char *)nondet_uint();               // Simulating pointer
    pValueLoc = (const char **)nondet_uint();           // Simulating pointer
    pValueLen = (size_t *)nondet_uint();                // Simulating pointer

    // Assumptions based on codeAnalysis
    __CPROVER_assume(response.pBuffer != NULL);
    __CPROVER_assume(response.bufferLen > 0);
    __CPROVER_assume(pField != NULL);
    __CPROVER_assume(pValueLoc != NULL);
    __CPROVER_assume(pValueLen != NULL);

    HTTPClient_ReadHeader(&response, pField, response.bufferLen, pValueLoc, pValueLen);
}
