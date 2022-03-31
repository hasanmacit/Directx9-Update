//arat

void CPythonSystem::GetDisplaySettings()
{
	memset(m_ResolutionList, 0, sizeof(TResolution) * RESOLUTION_MAX_NUM);
	m_ResolutionCount = 0;

	LPDIRECT3D8 lpD3D = CPythonGraphic::Instance().GetD3D();

	D3DADAPTER_IDENTIFIER8 d3dAdapterIdentifier;
	D3DDISPLAYMODE d3ddmDesktop;

	lpD3D->GetAdapterIdentifier(0, D3DENUM_NO_WHQL_LEVEL, &d3dAdapterIdentifier);
	lpD3D->GetAdapterDisplayMode(0, &d3ddmDesktop);

	DWORD dwNumAdapterModes = lpD3D->GetAdapterModeCount(0);

	for (UINT iMode = 0; iMode < dwNumAdapterModes; iMode++)
	{
		D3DDISPLAYMODE DisplayMode;
		lpD3D->EnumAdapterModes(0, iMode, &DisplayMode);

//değiştir

void CPythonSystem::GetDisplaySettings()
{
	memset(m_ResolutionList, 0, sizeof(TResolution) * RESOLUTION_MAX_NUM);
	m_ResolutionCount = 0;

	LPDIRECT3D9 lpD3D = CPythonGraphic::Instance().GetD3D();

	D3DADAPTER_IDENTIFIER9 d3dAdapterIdentifier;
	D3DDISPLAYMODE d3ddmDesktop;

	lpD3D->GetAdapterIdentifier(0, 0, &d3dAdapterIdentifier);
	lpD3D->GetAdapterDisplayMode(0, &d3ddmDesktop);

	// ÀÌ ¾îµªÅÍ°¡ °¡Áö°í ÀÖ´Â µğ½ºÇÃ·¡ÀÌ ¸ğµå°¹¼ö¸¦ ³ª¿­ÇÑ´Ù..
	DWORD dwNumAdapterModes = lpD3D->GetAdapterModeCount(0, d3ddmDesktop.Format);

	for (UINT iMode = 0; iMode < dwNumAdapterModes; iMode++)
	{
		D3DDISPLAYMODE DisplayMode;
		lpD3D->EnumAdapterModes(0, d3ddmDesktop.Format, iMode, &DisplayMode);