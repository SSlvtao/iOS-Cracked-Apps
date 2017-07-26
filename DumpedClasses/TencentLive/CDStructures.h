//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AVHttpResponse {
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> URL_;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> version_;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> statusMsg_;
    int status_;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> body_;
    struct map<std::basic_string<char>, std::basic_string<char>, std::less<std::basic_string<char>>, std::allocator<std::pair<const std::basic_string<char>, std::basic_string<char>>>> headers_;
};

struct AVPacketContext {
    long long _field1;
    long long _field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
    struct AVRational _field7;
    struct AVRational _field8;
    int _field9;
    int _field10;
    int _field11;
    int _field12;
    char *_field13[3];
    int _field14[3];
    char *_field15;
    unsigned int _field16;
    int _field17;
    int _field18;
    int _field19;
    long long _field20;
    long long _field21;
    int _field22;
    long long _field23;
    unsigned int _field24;
    unsigned int _field25;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field26;
    int _field27;
    long long _field28;
    char _field29;
    int _field30;
    void *_field31;
    void *_field32;
    CDUnknownFunctionPointerType _field33;
    CDUnknownFunctionPointerType _field34;
    CDUnknownFunctionPointerType _field35;
};

struct AVPacketDataStat {
    long long _field1;
    long long _field2;
    long long _field3;
    long long _field4;
    long long _field5;
    long long _field6;
    int _field7;
    int _field8;
    int _field9;
    int _field10;
    int _field11;
};

struct AVRational {
    int _field1;
    int _field2;
};

struct AppInfo {
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _field1;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _field2;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _field3;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _field4;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _field5;
    struct map<std::basic_string<char>, std::basic_string<char>, std::less<std::basic_string<char>>, std::allocator<std::pair<const std::basic_string<char>, std::basic_string<char>>>> _field6;
};

struct AppSession {
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _field1;
    struct vector<std::basic_string<char>, std::allocator<std::basic_string<char>>> _field2;
};

struct Attachment {
    char _field1;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _field2;
    struct vector<char, std::allocator<char>> _field3;
};

struct AudioQueueBuffer {
    unsigned int _field1;
    void *_field2;
    unsigned int _field3;
    void *_field4;
    unsigned int _field5;
    struct AudioStreamPacketDescription *_field6;
    unsigned int _field7;
};

struct AudioStreamBasicDescription {
    double mSampleRate;
    unsigned int mFormatID;
    unsigned int mFormatFlags;
    unsigned int mBytesPerPacket;
    unsigned int mFramesPerPacket;
    unsigned int mBytesPerFrame;
    unsigned int mChannelsPerFrame;
    unsigned int mBitsPerChannel;
    unsigned int mReserved;
};

struct AudioStreamPacketDescription {
    long long _field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct CATransform3D {
    double m11;
    double m12;
    double m13;
    double m14;
    double m21;
    double m22;
    double m23;
    double m24;
    double m31;
    double m32;
    double m33;
    double m34;
    double m41;
    double m42;
    double m43;
    double m44;
};

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CGVector {
    double dx;
    double dy;
};

struct CLLocationCoordinate2D {
    double latitude;
    double longitude;
};

struct CPlayerHandlerInfo__ {
    double playerVolume;
    _Bool playingAds;
    unsigned long long preImuteStatus;
};

struct CPlayerWrapper {
    CDUnknownFunctionPointerType *_field1;
    struct IPlayerWrapper *_field2;
    id _field3;
    int _field4;
    int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    int _field9;
    CDStruct_183601bc *_field10;
    CDStruct_183601bc *_field11;
    CDStruct_183601bc *_field12;
    CDStruct_183601bc *_field13;
};

struct CachedFailedData {
    _Bool wasCachedFailed;
    long long failedCacheOrder;
};

struct ExceptionUpload {
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _field1;
    long long _field2;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _field3;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _field4;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _field5;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _field6;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _field7;
    struct map<std::basic_string<char>, std::basic_string<char>, std::less<std::basic_string<char>>, std::allocator<std::pair<const std::basic_string<char>, std::basic_string<char>>>> _field8;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _field9;
    struct AppSession _field10;
    int _field11;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _field12;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _field13;
    struct AppInfo _field14;
    struct vector<rqd::AppInfo, std::allocator<rqd::AppInfo>> _field15;
    struct vector<rqd::AppInfo, std::allocator<rqd::AppInfo>> _field16;
    struct vector<rqd::Attachment, std::allocator<rqd::Attachment>> _field17;
    struct map<std::basic_string<char>, std::basic_string<char>, std::less<std::basic_string<char>>, std::allocator<std::pair<const std::basic_string<char>, std::basic_string<char>>>> _field18;
    struct map<std::basic_string<char>, std::basic_string<char>, std::less<std::basic_string<char>>, std::allocator<std::pair<const std::basic_string<char>, std::basic_string<char>>>> _field19;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _field20;
    _Bool _field21;
};

struct ExceptionUploadPackage {
    struct vector<rqd::ExceptionUpload, std::allocator<rqd::ExceptionUpload>> _field1;
};

struct IPlayerWrapper;

struct JceInputStream<analyticstaf::BufferReader> {
    char *_field1;
    unsigned long long _field2;
    unsigned long long _field3;
};

struct JceOutputStream<analyticstaf::BufferWriter> {
    char *_field1;
    unsigned long long _field2;
    unsigned long long _field3;
};

struct MixPkg {
    struct map<int, std::vector<char, std::allocator<char>>, std::less<int>, std::allocator<std::pair<const int, std::vector<char, std::allocator<char>>>>> _field1;
};

struct NSDictionary {
    Class _field1;
};

struct ODKPLCrashHostInfoVersion {
    unsigned long long major;
    unsigned long long minor;
    unsigned long long revision;
};

struct ODKPLCrashReporterCallbacks {
    unsigned short _field1;
    void *_field2;
    CDUnknownFunctionPointerType _field3;
};

struct OpenGlViewParameters {
    _Bool _field1;
    double _field2;
};

struct QLMRCtldelegateFlags__ {
    unsigned int mediaRootCtl:1;
};

struct QQPlayerNativeContext {
    struct AVPacketContext _field1;
    struct AVPacketDataStat _field2;
    int _field3;
};

struct RequestPkg {
    int _field1;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _field2;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _field3;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _field4;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _field5;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _field6;
    int _field7;
    struct vector<char, std::allocator<char>> _field8;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _field9;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _field10;
    struct map<std::basic_string<char>, std::basic_string<char>, std::less<std::basic_string<char>>, std::allocator<std::pair<const std::basic_string<char>, std::basic_string<char>>>> _field11;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _field12;
    long long _field13;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _field14;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _field15;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _field16;
    long long _field17;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _field18;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _field19;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _field20;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _field21;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _field22;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _field23;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _field24;
};

struct ResponsePkg {
    char _field1;
    int _field2;
    struct vector<char, std::allocator<char>> _field3;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _field4;
    long long _field5;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _field6;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _field7;
};

struct SRHandlerDelegateMapStruct__ {
    unsigned int canSendMessage:1;
    unsigned int canShowLayout:1;
    unsigned int canCoseLayout:1;
    unsigned int canOpenStarRank:1;
    unsigned int canTapBackgroundArea:1;
    unsigned int canShareTo:1;
};

struct SummaryInfo {
    long long _field1;
    char _field2;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _field3;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _field4;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _field5;
    struct map<std::basic_string<char>, std::basic_string<char>, std::less<std::basic_string<char>>, std::allocator<std::pair<const std::basic_string<char>, std::basic_string<char>>>> _field6;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _field7;
    _Bool _field8;
};

struct UIColor {
    Class _field1;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct UseInfo {
    long long prevActiveTime;
    long long prevInActiveTime;
    long long prevUseTime;
    _Bool isCrashed;
};

struct UserInfoPackage {
    char _field1;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _field2;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _field3;
    struct vector<rqd::SummaryInfo, std::allocator<rqd::SummaryInfo>> _field4;
    struct map<std::basic_string<char>, std::basic_string<char>, std::less<std::basic_string<char>>, std::allocator<std::pair<const std::basic_string<char>, std::basic_string<char>>>> _field5;
};

struct VRPointF {
    float _field1;
    float _field2;
};

struct VideoSplitMicroRectifyDelegateMark_ {
    unsigned int canRespondVideoCyclePlay:1;
};

struct WBSDKJKConstBuffer {
    struct WBSDKJKConstPtrRange _field1;
};

struct WBSDKJKConstPtrRange {
    char *_field1;
    unsigned long long _field2;
};

struct WBSDKJKEncodeCache {
    id _field1;
    unsigned long long _field2;
    unsigned long long _field3;
};

struct WBSDKJKEncodeState {
    struct WBSDKJKManagedBuffer _field1;
    struct WBSDKJKManagedBuffer _field2;
    unsigned long long _field3;
    struct WBSDKJKFastClassLookup _field4;
    struct WBSDKJKEncodeCache _field5[1024];
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    id _field9;
    id _field10;
    SEL _field11;
    CDUnknownFunctionPointerType _field12;
    CDUnknownBlockType _field13;
};

struct WBSDKJKFastClassLookup {
    void *_field1;
    void *_field2;
    void *_field3;
    void *_field4;
    void *_field5;
};

struct WBSDKJKHashTableEntry {
    unsigned long long _field1;
    id _field2;
    id _field3;
};

struct WBSDKJKManagedBuffer {
    struct WBSDKJKPtrRange _field1;
    unsigned long long _field2;
    unsigned long long _field3;
};

struct WBSDKJKObjCImpCache {
    Class _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
};

struct WBSDKJKObjectStack {
    void **_field1;
    void **_field2;
    unsigned long long *_field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
};

struct WBSDKJKParseState {
    unsigned long long _field1;
    struct WBSDKJKConstBuffer _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    struct WBSDKJKParseToken _field9;
    struct WBSDKJKObjectStack _field10;
    struct WBSDKJKTokenCache _field11;
    struct WBSDKJKObjCImpCache _field12;
    id _field13;
    int _field14;
    _Bool _field15;
};

struct WBSDKJKParseToken {
    struct WBSDKJKConstPtrRange _field1;
    unsigned long long _field2;
    struct WBSDKJKTokenValue _field3;
    struct WBSDKJKManagedBuffer _field4;
};

struct WBSDKJKPtrRange {
    char *_field1;
    unsigned long long _field2;
};

struct WBSDKJKTokenCache {
    struct WBSDKJKTokenCacheItem *_field1;
    unsigned long long _field2;
    unsigned int _field3;
    unsigned char _field4[1024];
};

struct WBSDKJKTokenCacheItem;

struct WBSDKJKTokenValue {
    struct WBSDKJKConstPtrRange _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    union {
        long long _field1;
        unsigned long long _field2;
        double _field3;
    } _field4;
    struct WBSDKJKTokenCacheItem *_field5;
};

struct WDKPkgInfo {
    char _field1;
    int _field2;
    short _field3;
    short _field4;
    char _field5;
    int _field6;
    char _field7;
    char *_field8;
    int _field9;
    char *_field10;
    char _field11;
};

struct _Alloc_hider {
    char *_M_p;
};

struct _DDRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _MidasStuKeyProcessor {
    CDUnknownFunctionPointerType _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _ODKPLCrashReportDecoder {
    struct _Odkplcrash__CrashReport *_field1;
};

struct _Odkplcrash__CrashReport {
    struct _ProtobufCMessage _field1;
    struct _Odkplcrash__CrashReport__SystemInfo *_field2;
    struct _Odkplcrash__CrashReport__ApplicationInfo *_field3;
    unsigned long long _field4;
    struct _Odkplcrash__CrashReport__Thread **_field5;
    unsigned long long _field6;
    struct _Odkplcrash__CrashReport__BinaryImage **_field7;
    struct _Odkplcrash__CrashReport__Exception *_field8;
    struct _Odkplcrash__CrashReport__Signal *_field9;
    struct _Odkplcrash__CrashReport__ProcessInfo *_field10;
    struct _Odkplcrash__CrashReport__MachineInfo *_field11;
    struct _Odkplcrash__CrashReport__ReportInfo *_field12;
};

struct _Odkplcrash__CrashReport__ApplicationInfo {
    struct _ProtobufCMessage _field1;
    char *_field2;
    char *_field3;
};

struct _Odkplcrash__CrashReport__BinaryImage;

struct _Odkplcrash__CrashReport__Exception {
    struct _ProtobufCMessage _field1;
    char *_field2;
    char *_field3;
    unsigned long long _field4;
    struct _Odkplcrash__CrashReport__Thread__StackFrame **_field5;
};

struct _Odkplcrash__CrashReport__MachineInfo {
    struct _ProtobufCMessage _field1;
    char *_field2;
    struct _Odkplcrash__CrashReport__Processor *_field3;
    unsigned int _field4;
    unsigned int _field5;
};

struct _Odkplcrash__CrashReport__ProcessInfo {
    struct _ProtobufCMessage _field1;
    char *_field2;
    unsigned int _field3;
    char *_field4;
    char *_field5;
    unsigned int _field6;
    int _field7;
    int _field8;
    unsigned long long _field9;
};

struct _Odkplcrash__CrashReport__Processor {
    struct _ProtobufCMessage _field1;
    int _field2;
    int _field3;
    unsigned long long _field4;
    unsigned long long _field5;
};

struct _Odkplcrash__CrashReport__ReportInfo;

struct _Odkplcrash__CrashReport__Signal {
    struct _ProtobufCMessage _field1;
    char *_field2;
    char *_field3;
    unsigned long long _field4;
    struct _Odkplcrash__CrashReport__Signal__MachException *_field5;
};

struct _Odkplcrash__CrashReport__Signal__MachException {
    struct _ProtobufCMessage _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long *_field4;
};

struct _Odkplcrash__CrashReport__Symbol {
    struct _ProtobufCMessage _field1;
    char *_field2;
    unsigned long long _field3;
    int _field4;
    unsigned long long _field5;
};

struct _Odkplcrash__CrashReport__SystemInfo {
    struct _ProtobufCMessage _field1;
    int _field2;
    int _field3;
    char *_field4;
    int _field5;
    long long _field6;
    char *_field7;
};

struct _Odkplcrash__CrashReport__Thread;

struct _Odkplcrash__CrashReport__Thread__StackFrame {
    struct _ProtobufCMessage _field1;
    unsigned long long _field2;
    struct _Odkplcrash__CrashReport__Symbol *_field3;
};

struct _ProtobufCMessage {
    struct _ProtobufCMessageDescriptor *_field1;
    unsigned int _field2;
    struct _ProtobufCMessageUnknownField *_field3;
};

struct _ProtobufCMessageDescriptor;

struct _ProtobufCMessageUnknownField;

struct _Rb_tree<int, std::pair<const int, std::vector<char, std::allocator<char>>>, std::_Select1st<std::pair<const int, std::vector<char, std::allocator<char>>>>, std::less<int>, std::allocator<std::pair<const int, std::vector<char, std::allocator<char>>>>> {
    struct _Rb_tree_impl<std::less<int>, false> _field1;
};

struct _Rb_tree<std::basic_string<char>, std::pair<const std::basic_string<char>, std::basic_string<char>>, std::_Select1st<std::pair<const std::basic_string<char>, std::basic_string<char>>>, std::less<std::basic_string<char>>, std::allocator<std::pair<const std::basic_string<char>, std::basic_string<char>>>> {
    struct _Rb_tree_impl<std::less<std::basic_string<char>>, false> _M_impl;
};

struct _Rb_tree_impl<std::less<int>, false> {
    struct less<int> _field1;
    struct _Rb_tree_node_base _field2;
    unsigned long long _field3;
};

struct _Rb_tree_impl<std::less<std::basic_string<char>>, false> {
    struct less<std::basic_string<char>> _M_key_compare;
    struct _Rb_tree_node_base _M_header;
    unsigned long long _M_node_count;
};

struct _Rb_tree_node_base {
    int _M_color;
    struct _Rb_tree_node_base *_M_parent;
    struct _Rb_tree_node_base *_M_left;
    struct _Rb_tree_node_base *_M_right;
};

struct _RecoverConfig {
    unsigned int _field1;
    _Bool _field2;
    unsigned int _field3;
    unsigned int _field4;
    _Bool _field5;
};

struct __CFString;

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct _xmlAttr {
    void *_field1;
    int _field2;
    char *_field3;
    struct _xmlNode *_field4;
    struct _xmlNode *_field5;
    struct _xmlNode *_field6;
    struct _xmlAttr *_field7;
    struct _xmlAttr *_field8;
    struct _xmlDoc *_field9;
    struct _xmlNs *_field10;
    int _field11;
    void *_field12;
};

struct _xmlDoc {
    void *_field1;
    int _field2;
    char *_field3;
    struct _xmlNode *_field4;
    struct _xmlNode *_field5;
    struct _xmlNode *_field6;
    struct _xmlNode *_field7;
    struct _xmlNode *_field8;
    struct _xmlDoc *_field9;
    int _field10;
    int _field11;
    struct _xmlDtd *_field12;
    struct _xmlDtd *_field13;
    struct _xmlNs *_field14;
    char *_field15;
    char *_field16;
    void *_field17;
    void *_field18;
    char *_field19;
    int _field20;
    struct _xmlDict *_field21;
    void *_field22;
    int _field23;
    int _field24;
};

struct _xmlDtd;

struct _xmlNode {
    void *_field1;
    int _field2;
    char *_field3;
    struct _xmlNode *_field4;
    struct _xmlNode *_field5;
    struct _xmlNode *_field6;
    struct _xmlNode *_field7;
    struct _xmlNode *_field8;
    struct _xmlDoc *_field9;
    struct _xmlNs *_field10;
    char *_field11;
    struct _xmlAttr *_field12;
    struct _xmlNs *_field13;
    void *_field14;
    unsigned short _field15;
    unsigned short _field16;
};

struct _xmlNs {
    struct _xmlNs *_field1;
    int _field2;
    char *_field3;
    char *_field4;
    void *_field5;
    struct _xmlDoc *_field6;
};

struct adjustingMark_ {
    unsigned int status:2;
};

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    char *_field1;
                    unsigned long long _field2;
                    unsigned long long _field3;
                } _field1;
                struct __short {
                    char _field1[23];
                    struct {
                        unsigned char _field1;
                    } _field2;
                } _field2;
                struct __raw {
                    unsigned long long _field1[3];
                } _field3;
            } _field1;
        } _field1;
    } _field1;
};

struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
    struct _Alloc_hider _M_dataplus;
};

struct bignum_st;

struct bn_blinding_st;

struct bn_mont_ctx_st;

struct cSmartPtr<download_manager::iDownloadRecord> {
    struct iDownloadRecord *mPtr;
};

struct correspondItemMark__ {
    unsigned int QLMomentPublishItemType:1;
    unsigned int QLMiniVideoItemFantuanType:1;
};

struct crypto_ex_data_st {
    struct stack_st_void *_field1;
    int _field2;
};

struct engine_st;

struct expandFoldSupportDelegateMark_ {
    unsigned int canExecExpandContentAction:1;
    unsigned int canExecFoldContentAction:1;
};

struct frozenRectMark__ {
    unsigned int frozenOrigX:1;
    unsigned int frozenOrigY:1;
    unsigned int frozenWidth:1;
    unsigned int frozenHeight:1;
};

struct frozenRect__ {
    struct CGRect rect;
    struct frozenRectMark__ frozenMark;
};

struct iDownloadRecord;

struct in6_addr {
    union {
        unsigned char _field1[16];
        unsigned short _field2[8];
        unsigned int _field3[4];
    } _field1;
};

struct in_addr {
    unsigned int _field1;
};

struct internal_state;

struct less<int>;

struct less<std::basic_string<char>>;

struct map<int, std::vector<char, std::allocator<char>>, std::less<int>, std::allocator<std::pair<const int, std::vector<char, std::allocator<char>>>>> {
    struct _Rb_tree<int, std::pair<const int, std::vector<char, std::allocator<char>>>, std::_Select1st<std::pair<const int, std::vector<char, std::allocator<char>>>>, std::less<int>, std::allocator<std::pair<const int, std::vector<char, std::allocator<char>>>>> _field1;
};

struct map<std::basic_string<char>, std::basic_string<char>, std::less<std::basic_string<char>>, std::allocator<std::pair<const std::basic_string<char>, std::basic_string<char>>>> {
    struct _Rb_tree<std::basic_string<char>, std::pair<const std::basic_string<char>, std::basic_string<char>>, std::_Select1st<std::pair<const std::basic_string<char>, std::basic_string<char>>>, std::less<std::basic_string<char>>, std::allocator<std::pair<const std::basic_string<char>, std::basic_string<char>>>> _M_t;
};

struct objc_method_description {
    SEL _field1;
    char *_field2;
};

struct odkplcrash_exception_server_context {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    CDUnknownFunctionPointerType _field5;
    void *_field6;
    struct _opaque_pthread_mutex_t _field7;
    struct _opaque_pthread_cond_t {
        long long _field1;
        char _field2[40];
    } _field8;
    unsigned int _field9;
    _Bool _field10;
};

struct odkplcrash_mach_exception_port_set {
    unsigned int count;
    unsigned int masks[14];
    unsigned int ports[14];
    int behaviors[14];
    int flavors[14];
};

struct respondActionMark__ {
    unsigned int canExecExpandContentAction:1;
    unsigned int canExecFoldContentAction:1;
};

struct respondsMark_ {
    unsigned int imgCornerBottomLeftOrigPaddingMark:1;
    unsigned int imgCornerBottomRightOrigPaddingMark:1;
    unsigned int imgCornerTopLeftOrigPaddingMark:1;
    unsigned int imgCornerTopRightOrigPaddingMark:1;
    unsigned int imgCornerBottomLeftSizeMark:1;
    unsigned int imgCornerBottomRightSizeMark:1;
    unsigned int imgCornerTopLeftSizeMark:1;
    unsigned int imgCornerTopRightSizeMark:1;
};

struct rsa_meth_st;

struct rsa_st {
    int _field1;
    long long _field2;
    struct rsa_meth_st *_field3;
    struct engine_st *_field4;
    struct bignum_st *_field5;
    struct bignum_st *_field6;
    struct bignum_st *_field7;
    struct bignum_st *_field8;
    struct bignum_st *_field9;
    struct bignum_st *_field10;
    struct bignum_st *_field11;
    struct bignum_st *_field12;
    struct crypto_ex_data_st _field13;
    int _field14;
    int _field15;
    struct bn_mont_ctx_st *_field16;
    struct bn_mont_ctx_st *_field17;
    struct bn_mont_ctx_st *_field18;
    char *_field19;
    struct bn_blinding_st *_field20;
    struct bn_blinding_st *_field21;
};

struct sockaddr {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[14];
};

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

struct sockaddr_in6 {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    unsigned int _field4;
    struct in6_addr _field5;
    unsigned int _field6;
};

struct sockaddr_un {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[104];
};

struct stack_st_void;

struct timeval {
    long long tv_sec;
    int tv_usec;
};

struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
    long long tm_gmtoff;
    char *tm_zone;
};

struct uregex;

struct vector<char, std::allocator<char>> {
    struct _Vector_impl {
        char *_field1;
        char *_field2;
        char *_field3;
    } _field1;
};

struct vector<id<ApKeyChangeObserver>, std::__1::allocator<id<ApKeyChangeObserver>>> {
    id *__begin_;
    id *__end_;
    struct __compressed_pair<__strong id<ApKeyChangeObserver>*, std::__1::allocator<id<ApKeyChangeObserver>>> {
        id *__first_;
    } __end_cap_;
};

struct vector<rqd::AppInfo, std::allocator<rqd::AppInfo>> {
    struct _Vector_impl {
        struct AppInfo *_field1;
        struct AppInfo *_field2;
        struct AppInfo *_field3;
    } _field1;
};

struct vector<rqd::Attachment, std::allocator<rqd::Attachment>> {
    struct _Vector_impl {
        struct Attachment *_field1;
        struct Attachment *_field2;
        struct Attachment *_field3;
    } _field1;
};

struct vector<rqd::ExceptionUpload, std::allocator<rqd::ExceptionUpload>> {
    struct _Vector_impl {
        struct ExceptionUpload *_field1;
        struct ExceptionUpload *_field2;
        struct ExceptionUpload *_field3;
    } _field1;
};

struct vector<rqd::SummaryInfo, std::allocator<rqd::SummaryInfo>> {
    struct _Vector_impl {
        struct SummaryInfo *_field1;
        struct SummaryInfo *_field2;
        struct SummaryInfo *_field3;
    } _field1;
};

struct vector<std::basic_string<char>, std::allocator<std::basic_string<char>>> {
    struct _Vector_impl {
        struct basic_string<char, std::char_traits<char>, std::allocator<char>> *_field1;
        struct basic_string<char, std::char_traits<char>, std::allocator<char>> *_field2;
        struct basic_string<char, std::char_traits<char>, std::allocator<char>> *_field3;
    } _field1;
};

struct vector<unsigned long, std::allocator<unsigned long>> {
    struct _Vector_impl {
        unsigned long long *_M_start;
        unsigned long long *_M_finish;
        unsigned long long *_M_end_of_storage;
    } _M_impl;
};

struct visitorMark_ {
    unsigned int canDealWithFloatingOrigX_EndX:1;
    unsigned int canDealWithFloatingOrigY_EndY:1;
    unsigned int canDealWithFloatingHeihgt:1;
};

struct z_stream_s {
    char *next_in;
    unsigned int avail_in;
    unsigned long long total_in;
    char *next_out;
    unsigned int avail_out;
    unsigned long long total_out;
    char *msg;
    struct internal_state *state;
    CDUnknownFunctionPointerType zalloc;
    CDUnknownFunctionPointerType zfree;
    void *opaque;
    int data_type;
    unsigned long long adler;
    unsigned long long reserved;
};

#pragma mark Typedef'd Structures

typedef struct {
    _Bool _field1;
    unsigned char _field2;
    _Bool _field3;
    unsigned long long _field4;
} CDStruct_6a6a01a4;

typedef struct {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned char _field5;
    unsigned char _field6;
    unsigned char _field7;
    unsigned char _field8;
    unsigned char _field9;
    unsigned char _field10;
    unsigned char _field11;
    unsigned char _field12;
    unsigned char _field13;
    unsigned char _field14;
    unsigned char _field15;
    unsigned char _field16;
} CDStruct_bd2f613f;

typedef struct {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
} CDStruct_a06f635e;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    unsigned short wCmd;
    unsigned short wSubCmd;
    short wRst;
    unsigned int dwUsed;
    unsigned int dwCalUsed;
    unsigned short wTry;
    unsigned char acHostName[32];
    unsigned char acHostIp[32];
    unsigned short wPort;
    unsigned char cConn;
    unsigned char cNetType;
    unsigned char cNetwork;
    unsigned char cEncryptType;
    unsigned char acErrorStr[64];
    unsigned short wSendDataLen;
    unsigned short wResvDataLen;
} CDStruct_7a5a57b9;

typedef struct {
    char acHostName[32];
    unsigned short wPort;
    unsigned short wTimeout;
} CDStruct_93d23b61;

typedef struct {
    char *_field1;
    void **_field2;
    unsigned int _field3;
    int _field4;
} CDStruct_19471fff;

typedef struct {
    char *_field1;
    int _field2;
    int _field3;
    char *_field4;
    int _field5;
} CDStruct_d8f43467;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
} CDStruct_d2b197d1;

typedef struct {
    int _field1;
    char _field2;
    char _field3;
    char _field4;
    char _field5;
    double _field6;
} CDStruct_79f9e052;

typedef struct {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
    int _field7;
    int _field8;
    int _field9;
    int _field10;
    int _field11;
    float _field12;
} CDStruct_81056ce5;

typedef struct {
    int omasCode;
    int bizCode;
    int sdkCode;
} CDStruct_44239415;

typedef struct {
    long long version;
    void *info;
    CDUnknownFunctionPointerType retain;
    CDUnknownFunctionPointerType release;
    CDUnknownFunctionPointerType copyDescription;
} CDStruct_4210025a;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    long long _field1;
    int _field2;
} CDStruct_87dc826d;

typedef struct {
    long long location;
    long long length;
} CDStruct_627e0f85;

typedef struct CDStruct_183601bc;

// Template types
typedef struct JceInputStream<analyticstaf::BufferReader> {
    char *_field1;
    unsigned long long _field2;
    unsigned long long _field3;
} JceInputStream_f07640a9;

typedef struct JceOutputStream<analyticstaf::BufferWriter> {
    char *_field1;
    unsigned long long _field2;
    unsigned long long _field3;
} JceOutputStream_31132a5e;

typedef struct cSmartPtr<download_manager::iDownloadRecord> {
    struct iDownloadRecord *mPtr;
} cSmartPtr_bf8fc06d;

#pragma mark Named Unions

union _GLKMatrix4 {
    struct {
        float _field1;
        float _field2;
        float _field3;
        float _field4;
        float _field5;
        float _field6;
        float _field7;
        float _field8;
        float _field9;
        float _field10;
        float _field11;
        float _field12;
        float _field13;
        float _field14;
        float _field15;
        float _field16;
    } _field1;
    float _field2[16];
};

