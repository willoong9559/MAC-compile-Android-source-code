/*
    File:		AVMetadataIdentifiers.h

    Framework:  AVFoundation
 
    Copyright 2014 Apple Inc. All rights reserved.

*/

#import <AVFoundation/AVBase.h>
#import <Foundation/Foundation.h>

// CommonMetadata
AVF_EXPORT NSString *const AVMetadataCommonIdentifierTitle                                      NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataCommonIdentifierCreator                                    NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataCommonIdentifierSubject                                    NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataCommonIdentifierDescription                                NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataCommonIdentifierPublisher                                  NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataCommonIdentifierContributor                                NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataCommonIdentifierCreationDate                               NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataCommonIdentifierLastModifiedDate                           NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataCommonIdentifierType                                       NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataCommonIdentifierFormat                                     NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataCommonIdentifierAssetIdentifier                            NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataCommonIdentifierSource                                     NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataCommonIdentifierLanguage                                   NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataCommonIdentifierRelation                                   NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataCommonIdentifierLocation                                   NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataCommonIdentifierCopyrights                                 NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataCommonIdentifierAlbumName                                  NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataCommonIdentifierAuthor                                     NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataCommonIdentifierArtist                                     NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataCommonIdentifierArtwork                                    NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataCommonIdentifierMake                                       NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataCommonIdentifierModel                                      NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataCommonIdentifierSoftware                                   NS_AVAILABLE(10_10, 8_0);

// QuickTimeUserData
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeUserDataAlbum                           NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeUserDataArranger                        NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeUserDataArtist                          NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeUserDataAuthor                          NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeUserDataChapter                         NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeUserDataComment                         NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeUserDataComposer                        NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeUserDataCopyright                       NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeUserDataCreationDate                    NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeUserDataDescription                     NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeUserDataDirector                        NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeUserDataDisclaimer                      NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeUserDataEncodedBy                       NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeUserDataFullName                        NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeUserDataGenre                           NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeUserDataHostComputer                    NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeUserDataInformation                     NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeUserDataKeywords                        NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeUserDataMake                            NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeUserDataModel                           NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeUserDataOriginalArtist                  NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeUserDataOriginalFormat                  NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeUserDataOriginalSource                  NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeUserDataPerformers                      NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeUserDataProducer                        NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeUserDataPublisher                       NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeUserDataProduct                         NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeUserDataSoftware                        NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeUserDataSpecialPlaybackRequirements     NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeUserDataTrack                           NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeUserDataWarning                         NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeUserDataWriter                          NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeUserDataURLLink                         NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeUserDataLocationISO6709                 NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeUserDataTrackName                       NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeUserDataCredits                         NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeUserDataPhonogramRights                 NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeUserDataTaggedCharacteristic            NS_AVAILABLE(10_10, 8_0);

// ISO UserData (includes 3GPP)
AVF_EXPORT NSString *const AVMetadataIdentifierISOUserDataCopyright                             NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierISOUserDataDate                                  NS_AVAILABLE(10_12, 10_0);
AVF_EXPORT NSString *const AVMetadataIdentifierISOUserDataTaggedCharacteristic                  NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifier3GPUserDataCopyright                             NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifier3GPUserDataAuthor                                NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifier3GPUserDataPerformer                             NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifier3GPUserDataGenre                                 NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifier3GPUserDataRecordingYear                         NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifier3GPUserDataLocation                              NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifier3GPUserDataTitle                                 NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifier3GPUserDataDescription                           NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifier3GPUserDataCollection                            NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifier3GPUserDataUserRating                            NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifier3GPUserDataThumbnail                             NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifier3GPUserDataAlbumAndTrack                         NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifier3GPUserDataKeywordList							NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifier3GPUserDataMediaClassification                   NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifier3GPUserDataMediaRating                           NS_AVAILABLE(10_10, 8_0);

// QuickTimeMetadata. For more information, see the QuickTime File Format Specification, available as part of the Mac OS X Reference Library at http://developer.apple.com/library/mac/navigation/
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeMetadataAuthor                          NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeMetadataComment                         NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeMetadataCopyright                       NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeMetadataCreationDate                    NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeMetadataDirector                        NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeMetadataDisplayName                     NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeMetadataInformation                     NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeMetadataKeywords                        NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeMetadataProducer                        NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeMetadataPublisher                       NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeMetadataAlbum                           NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeMetadataArtist                          NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeMetadataArtwork                         NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeMetadataDescription                     NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeMetadataSoftware                        NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeMetadataYear                            NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeMetadataGenre                           NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeMetadataiXML                            NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeMetadataLocationISO6709                 NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeMetadataMake                            NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeMetadataModel                           NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeMetadataArranger                        NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeMetadataEncodedBy                       NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeMetadataOriginalArtist                  NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeMetadataPerformer                       NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeMetadataComposer                        NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeMetadataCredits                         NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeMetadataPhonogramRights                 NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeMetadataCameraIdentifier                NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeMetadataCameraFrameReadoutTime          NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeMetadataTitle		                    NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeMetadataCollectionUser                  NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeMetadataRatingUser                      NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeMetadataLocationName                    NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeMetadataLocationBody                    NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeMetadataLocationNote                    NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeMetadataLocationRole                    NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeMetadataLocationDate                    NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeMetadataDirectionFacing                 NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeMetadataDirectionMotion                 NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeMetadataPreferredAffineTransform        NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeMetadataDetectedFace                    NS_AVAILABLE(10_11, 9_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeMetadataVideoOrientation                NS_AVAILABLE(10_11, 9_0);
AVF_EXPORT NSString *const AVMetadataIdentifierQuickTimeMetadataContentIdentifier               NS_AVAILABLE(10_11, 9_0);

// iTunesMetadata
AVF_EXPORT NSString *const AVMetadataIdentifieriTunesMetadataAlbum                              NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifieriTunesMetadataArtist                             NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifieriTunesMetadataUserComment                        NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifieriTunesMetadataCoverArt                           NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifieriTunesMetadataCopyright                          NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifieriTunesMetadataReleaseDate                        NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifieriTunesMetadataEncodedBy                          NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifieriTunesMetadataPredefinedGenre                    NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifieriTunesMetadataUserGenre                          NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifieriTunesMetadataSongName                           NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifieriTunesMetadataTrackSubTitle                      NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifieriTunesMetadataEncodingTool                       NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifieriTunesMetadataComposer                           NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifieriTunesMetadataAlbumArtist                        NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifieriTunesMetadataAccountKind                        NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifieriTunesMetadataAppleID                            NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifieriTunesMetadataArtistID                           NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifieriTunesMetadataSongID                             NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifieriTunesMetadataDiscCompilation                    NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifieriTunesMetadataDiscNumber                         NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifieriTunesMetadataGenreID                            NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifieriTunesMetadataGrouping                           NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifieriTunesMetadataPlaylistID                         NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifieriTunesMetadataContentRating                      NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifieriTunesMetadataBeatsPerMin                        NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifieriTunesMetadataTrackNumber                        NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifieriTunesMetadataArtDirector                        NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifieriTunesMetadataArranger                           NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifieriTunesMetadataAuthor                             NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifieriTunesMetadataLyrics                             NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifieriTunesMetadataAcknowledgement                    NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifieriTunesMetadataConductor                          NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifieriTunesMetadataDescription                        NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifieriTunesMetadataDirector                           NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifieriTunesMetadataEQ                                 NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifieriTunesMetadataLinerNotes                         NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifieriTunesMetadataRecordCompany                      NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifieriTunesMetadataOriginalArtist                     NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifieriTunesMetadataPhonogramRights                    NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifieriTunesMetadataProducer                           NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifieriTunesMetadataPerformer                          NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifieriTunesMetadataPublisher                          NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifieriTunesMetadataSoundEngineer                      NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifieriTunesMetadataSoloist                            NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifieriTunesMetadataCredits                            NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifieriTunesMetadataThanks                             NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifieriTunesMetadataOnlineExtras                       NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifieriTunesMetadataExecProducer                       NS_AVAILABLE(10_10, 8_0);

// ID3Metadata
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataAudioEncryption                       /* AENC Audio encryption */                                     NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataAttachedPicture                       /* APIC Attached picture */                                     NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataAudioSeekPointIndex                   /* ASPI Audio seek point index */                               NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataComments                              /* COMM Comments */                                             NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataCommercial                            /* COMR Commercial frame */                                     NS_AVAILABLE(10_11, 9_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataCommerical                            /* COMR Commercial frame */                                     NS_DEPRECATED(10_10, 10_11, 8_0, 9_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataEncryption                            /* ENCR Encryption method registration */                       NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataEqualization                          /* EQUA Equalization */                                         NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataEqualization2                         /* EQU2 Equalisation (2) */                                     NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataEventTimingCodes                      /* ETCO Event timing codes */                                   NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataGeneralEncapsulatedObject             /* GEOB General encapsulated object */                          NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataGroupIdentifier                       /* GRID Group identification registration */                    NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataInvolvedPeopleList_v23                /* IPLS Involved people list */                                 NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataLink                                  /* LINK Linked information */                                   NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataMusicCDIdentifier                     /* MCDI Music CD identifier */                                  NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataMPEGLocationLookupTable               /* MLLT MPEG location lookup table */                           NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataOwnership                             /* OWNE Ownership frame */                                      NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataPrivate                               /* PRIV Private frame */                                        NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataPlayCounter                           /* PCNT Play counter */                                         NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataPopularimeter                         /* POPM Popularimeter */                                        NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataPositionSynchronization               /* POSS Position synchronisation frame */                       NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataRecommendedBufferSize                 /* RBUF Recommended buffer size */                              NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataRelativeVolumeAdjustment              /* RVAD Relative volume adjustment */                           NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataRelativeVolumeAdjustment2             /* RVA2 Relative volume adjustment (2) */                       NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataReverb                                /* RVRB Reverb */                                               NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataSeek                                  /* SEEK Seek frame */                                           NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataSignature                             /* SIGN Signature frame */                                      NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataSynchronizedLyric                     /* SYLT Synchronized lyric/text */                              NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataSynchronizedTempoCodes                /* SYTC Synchronized tempo codes */                             NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataAlbumTitle                            /* TALB Album/Movie/Show title */                               NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataBeatsPerMinute                        /* TBPM BPM (beats per minute) */                               NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataComposer                              /* TCOM Composer */                                             NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataContentType                           /* TCON Content type */                                         NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataCopyright                             /* TCOP Copyright message */                                    NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataDate                                  /* TDAT Date */                                                 NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataEncodingTime                          /* TDEN Encoding time */                                        NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataPlaylistDelay                         /* TDLY Playlist delay */                                       NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataOriginalReleaseTime                   /* TDOR Original release time */                                NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataRecordingTime                         /* TDRC Recording time */                                       NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataReleaseTime                           /* TDRL Release time */                                         NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataTaggingTime                           /* TDTG Tagging time */                                         NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataEncodedBy                             /* TENC Encoded by */                                           NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataLyricist                              /* TEXT Lyricist/Text writer */                                 NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataFileType                              /* TFLT File type */                                            NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataTime                                  /* TIME Time */                                                 NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataInvolvedPeopleList_v24                /* TIPL Involved people list */                                 NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataContentGroupDescription               /* TIT1 Content group description */                            NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataTitleDescription                      /* TIT2 Title/songname/content description */                   NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataSubTitle                              /* TIT3 Subtitle/Description refinement */                      NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataInitialKey                            /* TKEY Initial key */                                          NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataLanguage                              /* TLAN Language(s) */                                          NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataLength                                /* TLEN Length */                                               NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataMusicianCreditsList                   /* TMCL Musician credits list */                                NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataMediaType                             /* TMED Media type */                                           NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataMood                                  /* TMOO Mood */                                                 NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataOriginalAlbumTitle                    /* TOAL Original album/movie/show title */                      NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataOriginalFilename                      /* TOFN Original filename */                                    NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataOriginalLyricist                      /* TOLY Original lyricist(s)/text writer(s) */                  NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataOriginalArtist                        /* TOPE Original artist(s)/performer(s) */                      NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataOriginalReleaseYear                   /* TORY Original release year */                                NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataFileOwner                             /* TOWN File owner/licensee */                                  NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataLeadPerformer                         /* TPE1 Lead performer(s)/Soloist(s) */                         NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataBand                                  /* TPE2 Band/orchestra/accompaniment */                         NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataConductor                             /* TPE3 Conductor/performer refinement */                       NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataModifiedBy                            /* TPE4 Interpreted, remixed, or otherwise modified by */       NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataPartOfASet                            /* TPOS Part of a set */                                        NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataProducedNotice                        /* TPRO Produced notice */                                      NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataPublisher                             /* TPUB Publisher */                                            NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataTrackNumber                           /* TRCK Track number/Position in set */                         NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataRecordingDates                        /* TRDA Recording dates */                                      NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataInternetRadioStationName              /* TRSN Internet radio station name */                          NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataInternetRadioStationOwner             /* TRSO Internet radio station owner */                         NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataSize                                  /* TSIZ Size */                                                 NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataAlbumSortOrder                        /* TSOA Album sort order */                                     NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataPerformerSortOrder                    /* TSOP Performer sort order */                                 NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataTitleSortOrder                        /* TSOT Title sort order */                                     NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataInternationalStandardRecordingCode    /* TSRC ISRC (international standard recording code) */         NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataEncodedWith                           /* TSSE Software/Hardware and settings used for encoding */     NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataSetSubtitle                           /* TSST Set subtitle */                                         NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataYear                                  /* TYER Year */                                                 NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataUserText                              /* TXXX User defined text information frame */                  NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataUniqueFileIdentifier                  /* UFID Unique file identifier */                               NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataTermsOfUse                            /* USER Terms of use */                                         NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataUnsynchronizedLyric                   /* USLT Unsynchronized lyric/text transcription */              NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataCommercialInformation                 /* WCOM Commercial information */                               NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataCopyrightInformation                  /* WCOP Copyright/Legal information */                          NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataOfficialAudioFileWebpage              /* WOAF Official audio file webpage */                          NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataOfficialArtistWebpage                 /* WOAR Official artist/performer webpage */                    NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataOfficialAudioSourceWebpage            /* WOAS Official audio source webpage */                        NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataOfficialInternetRadioStationHomepage  /* WORS Official Internet radio station homepage */             NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataPayment                               /* WPAY Payment */                                              NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataOfficialPublisherWebpage              /* WPUB Publishers official webpage */                          NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierID3MetadataUserURL                               /* WXXX User defined URL link frame */                          NS_AVAILABLE(10_10, 8_0);

AVF_EXPORT NSString *const AVMetadataIdentifierIcyMetadataStreamTitle                           NS_AVAILABLE(10_10, 8_0);
AVF_EXPORT NSString *const AVMetadataIdentifierIcyMetadataStreamURL                             NS_AVAILABLE(10_10, 8_0);

