//arat (2 kez)

if (FAILED(m_lpd3dVB->Lock(0, dwLockSize, (BYTE **) pretVertices, m_dwLockFlag)))

//değiştir (2 kez)

if (FAILED(m_lpd3dVB->Lock(0, dwLockSize, pretVertices, m_dwLockFlag)))

//arat

if (FAILED(m_lpd3dVB->Lock(0, 0, (BYTE**)pretVertices, 0)))

//değiştir

if (FAILED(m_lpd3dVB->Lock(0, 0, pretVertices, 0)))

//arat

if (FAILED(m_lpd3dVB->Lock(0, 0, (BYTE**)pretVertices, m_dwLockFlag)))

//değiştir

if (FAILED(m_lpd3dVB->Lock(0, 0, pretVertices, m_dwLockFlag)))

//arat

	if (FAILED(
		ms_lpd3dDevice->CreateVertexBuffer(
		m_dwBufferSize,
		m_dwUsage,
		m_dwFVF,
		m_d3dPool,
		&m_lpd3dVB)
		))
		return false;

//değiştir

	if (FAILED(
		ms_lpd3dDevice->CreateVertexBuffer(
		m_dwBufferSize, 
		m_dwUsage, 
		m_dwFVF, 
		m_d3dPool, 
		&m_lpd3dVB,
		NULL)
		))
		return false;