//arat

LPDIRECT3DINDEXBUFFER8 CGraphicIndexBuffer::GetD3DIndexBuffer() const

//değiştir

LPDIRECT3DINDEXBUFFER9 CGraphicIndexBuffer::GetD3DIndexBuffer() const

//arat (2 kez)

if (FAILED(m_lpd3dIdxBuf->Lock(0, 0, (BYTE**)pretIndices, 0)))

//değiştir (2 kez)

if (FAILED(m_lpd3dIdxBuf->Lock(0, 0, pretIndices, 0)))

//arat

if (FAILED(m_lpd3dIdxBuf->Lock(0, 0, &dstIndices, 0)))

//değiştir

if (FAILED(m_lpd3dIdxBuf->Lock(0, 0, (void**)&dstIndices, 0)))

//arat

if (FAILED(m_lpd3dIdxBuf->Lock(0, 0, (BYTE**)&dstIndices, 0)))

//değiştir

if (FAILED(m_lpd3dIdxBuf->Lock(0, 0, (void**)&dstIndices, 0)))

//arat


if (FAILED(ms_lpd3dDevice->CreateIndexBuffer(
		m_dwBufferSize,
		D3DUSAGE_WRITEONLY,
		m_d3dFmt,
		D3DPOOL_MANAGED,
		&m_lpd3dIdxBuf)
		))
		return false;

//değiştir

if (FAILED(ms_lpd3dDevice->CreateIndexBuffer(
		m_dwBufferSize, 
		D3DUSAGE_WRITEONLY, 
		m_d3dFmt,
		D3DPOOL_MANAGED, 
		&m_lpd3dIdxBuf,
		NULL)
		))
		return false;

