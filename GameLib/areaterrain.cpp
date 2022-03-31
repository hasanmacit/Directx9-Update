//arat

	IDirect3DTexture8* pkTex=NULL;

	UINT uiNewWidth = 256;
	UINT uiNewHeight = 256;
	hr = ms_lpd3dDevice->CreateTexture(
		uiNewWidth, uiNewHeight, 5, 0,
		format, D3DPOOL_MANAGED, &pkTex);

//değiştir

	IDirect3DTexture9* pkTex=NULL;

	UINT uiNewWidth = 256;
	UINT uiNewHeight = 256;
	hr = ms_lpd3dDevice->CreateTexture(
		uiNewWidth, uiNewHeight, 5, 0, 
		format, D3DPOOL_MANAGED, &pkTex, NULL);

//arat

hr = ms_lpd3dDevice->CreateTexture(ATTRMAP_XSIZE, ATTRMAP_YSIZE, 1, 0, D3DFMT_A8R8G8B8, D3DPOOL_MANAGED, &m_lpMarkedTexture);

//değiştir

hr = ms_lpd3dDevice->CreateTexture(ATTRMAP_XSIZE, ATTRMAP_YSIZE, 1, 0, D3DFMT_A8R8G8B8, D3DPOOL_MANAGED, &m_lpMarkedTexture, NULL);