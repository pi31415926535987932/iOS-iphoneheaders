/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:21 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSPObjectContextDelegate <TSPSupportDirectoryDelegate>
@property (nonatomic,readonly) <NSFilePresenter> * filePresenter; 
@property (nonatomic,readonly) bool ignoreDocumentSupport; 
@property (nonatomic,readonly) bool isDocumentSupportTemporary; 
@property (nonatomic,readonly) bool areNewExternalReferencesToDataAllowed; 
@optional
-(bool)retrievePassphraseWithConsumer:(id)arg1;
-(bool)ignoreDocumentSupport;
-(bool)isDocumentSupportTemporary;
-(id)additionalDocumentPropertiesForWrite;
-(id)packageDataForWrite;
-(bool)areExternalReferencesToDataAllowedAtURL:(id)arg1;
-(void)makeDocumentReadOnly;
-(void)addPersistenceWarnings:(id)arg1;
-(bool)areNewExternalReferencesToDataAllowed;
-(void)gilligan_data:(id)arg1 didMoveFromPackageIdentifier:(unsigned char)arg2 packageLocator:(id)arg3 toPackageIdentifier:(unsigned char)arg4 packageLocator:(id)arg5;
-(bool)gilligan_isRemoteData:(id)arg1;
-(id)persistenceWarningsForData:(id)arg1 isReadable:(bool)arg2 isExternal:(bool)arg3;
-(void)presentPersistenceError:(id)arg1;
-(void)decryptedDocumentWithKey:(id)arg1;
-(id)filePresenter;
@end
