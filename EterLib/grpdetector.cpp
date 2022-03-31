//arat

VOID D3D_CAdapterDisplayModeList::Build(IDirect3D8& rkD3D, D3DFORMAT eD3DFmtDefault, UINT iD3DAdapterInfo)

//komple değiştir

VOID D3D_CAdapterDisplayModeList::Build(IDirect3D9& rkD3D, D3DFORMAT eD3DFmtDefault, UINT iD3DAdapterInfo)
{
	D3DDISPLAYMODE* akD3DDM=m_akD3DDM;
	D3DFORMAT* aeD3DFmt=m_aeD3DFmt;

	UINT uD3DDMNum=0;
	UINT uD3DFmtNum=0;

	aeD3DFmt[uD3DFmtNum++]=eD3DFmtDefault;

	UINT uAdapterModeNum=rkD3D.GetAdapterModeCount(iD3DAdapterInfo, eD3DFmtDefault);
	for (UINT iD3DAdapterInfoMode=0; iD3DAdapterInfoMode<uAdapterModeNum; iD3DAdapterInfoMode++)
	{
		D3DDISPLAYMODE kD3DDMCur;
		rkD3D.EnumAdapterModes(iD3DAdapterInfo, eD3DFmtDefault, iD3DAdapterInfoMode, &kD3DDMCur);

		// IsFilterOutLowResolutionMode
		if( kD3DDMCur.Width  < FILTEROUT_LOWRESOLUTION_WIDTH || kD3DDMCur.Height < FILTEROUT_LOWRESOLUTION_HEIGHT )
			continue;

		// FindDisplayMode
		D3DDISPLAYMODE* pkD3DDMEnd=akD3DDM+uD3DDMNum;
		D3DDISPLAYMODE* pkD3DDMFind=std::find_if(akD3DDM, pkD3DDMEnd, FIsEqualD3DDisplayMode(&kD3DDMCur));

		// IsNewDisplayMode
		if (pkD3DDMFind==pkD3DDMEnd && uD3DDMNum<D3DDISPLAYMODE_MAX)
		{
			D3DDISPLAYMODE& rkD3DDMNew=akD3DDM[uD3DDMNum++];
			rkD3DDMNew.Width=kD3DDMCur.Width;
			rkD3DDMNew.Height=kD3DDMCur.Height;
			rkD3DDMNew.Format=kD3DDMCur.Format;

			// FindFormat
			D3DFORMAT* peD3DFmtEnd=aeD3DFmt+uD3DFmtNum;
			D3DFORMAT* peD3DFmtFind=std::find(aeD3DFmt, peD3DFmtEnd, kD3DDMCur.Format);

			// IsNewFormat
			if (peD3DFmtFind==peD3DFmtEnd && uD3DFmtNum<D3DFORMAT_MAX)
			{
				aeD3DFmt[uD3DFmtNum++]=kD3DDMCur.Format;
			}
		}
	}

	qsort(akD3DDM, uD3DDMNum, sizeof(D3DDISPLAYMODE), CompareD3DDisplayModeOrder);

	m_uD3DFmtNum=uD3DFmtNum;
	m_uD3DDMNum=uD3DDMNum;
}

//arat

BOOL D3D_CDeviceInfo::FindDepthStencilFormat(IDirect3D8& rkD3D, UINT iD3DAdapterInfo, D3DDEVTYPE DeviceType, D3DFORMAT TargetFormat, D3DFORMAT* pDepthStencilFormat )

//değiştir

BOOL D3D_CDeviceInfo::FindDepthStencilFormat(IDirect3D9& rkD3D, UINT iD3DAdapterInfo, D3DDEVTYPE DeviceType, D3DFORMAT TargetFormat, D3DFORMAT* pDepthStencilFormat )

//arat

BOOL D3D_CDeviceInfo::Build(IDirect3D8& rkD3D, UINT iD3DAdapterInfo, UINT iDevType, D3D_CAdapterDisplayModeList& rkD3DADMList, BOOL (*pfnConfirmDevice)(D3DCAPS8& rkD3DCaps, UINT uBehavior, D3DFORMAT eD3DFmt))

//değiştir

BOOL D3D_CDeviceInfo::Build(IDirect3D9& rkD3D, UINT iD3DAdapterInfo, UINT iDevType, D3D_CAdapterDisplayModeList& rkD3DADMList, BOOL (*pfnConfirmDevice)(D3DCAPS9& rkD3DCaps, UINT uBehavior, D3DFORMAT eD3DFmt))

//arat

			if (D3DDEVTYPE_HAL==m_eD3DDevType)
			{
				isHALExists=TRUE;

				if (m_kD3DCaps.Caps2 & D3DCAPS2_CANRENDERWINDOWED)
				{
					isHALWindowedCompatible=TRUE;

					if (iFmt==0)
						isHALDesktopCompatible=TRUE;

				}
			}

//değiştir

			if (D3DDEVTYPE_HAL==m_eD3DDevType)
			{
				isHALExists=TRUE;
				
				isHALWindowedCompatible=TRUE;

				if (iFmt==0)
					isHALDesktopCompatible=TRUE;

			}

//arat

if (aisFormatConfirmed[0] && (m_kD3DCaps.Caps2 & D3DCAPS2_CANRENDERWINDOWED) )

//değiştir

if (aisFormatConfirmed[0])

//arat

BOOL D3D_CAdapterInfo::Build(IDirect3D8& rkD3D, UINT iD3DAdapterInfo, PFNCONFIRMDEVICE pfnConfirmDevice)
{
	D3DDISPLAYMODE& rkD3DDMDesktop=m_kD3DDMDesktop;
	if (FAILED(rkD3D.GetAdapterDisplayMode(iD3DAdapterInfo, &rkD3DDMDesktop)))
		return FALSE;

	rkD3D.GetAdapterIdentifier(iD3DAdapterInfo, D3DENUM_NO_WHQL_LEVEL, &m_kD3DAdapterIdentifier);

	m_iCurD3DDevInfo=0;
	m_uD3DDevInfoNum=0;

//değiştir

BOOL D3D_CAdapterInfo::Build(IDirect3D9& rkD3D, UINT iD3DAdapterInfo, PFNCONFIRMDEVICE pfnConfirmDevice)
{
	D3DDISPLAYMODE& rkD3DDMDesktop=m_kD3DDMDesktop;
	if (FAILED(rkD3D.GetAdapterDisplayMode(iD3DAdapterInfo, &rkD3DDMDesktop)))
		return FALSE;

	rkD3D.GetAdapterIdentifier(iD3DAdapterInfo, 0, &m_kD3DAdapterIdentifier);
	
	m_iCurD3DDevInfo=0;
	m_uD3DDevInfoNum=0;

//arat

BOOL D3D_CDisplayModeAutoDetector::Build(IDirect3D8& rkD3D, PFNCONFIRMDEVICE pfnConfirmDevice)

//değiştir

BOOL D3D_CDisplayModeAutoDetector::Build(IDirect3D9& rkD3D, PFNCONFIRMDEVICE pfnConfirmDevice)
