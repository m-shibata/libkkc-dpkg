/* user-rule.c generated by valac 0.24.0.131-42e78, the Vala compiler
 * generated from user-rule.vala, do not modify */

/* 
 * Copyright (C) 2013 Daiki Ueno <ueno@gnu.org>
 * Copyright (C) 2013 Red Hat, Inc.
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 */

#include <glib.h>
#include <glib-object.h>
#include <gio/gio.h>
#include <stdlib.h>
#include <string.h>
#include <glib/gstdio.h>
#include <json-glib/json-glib.h>


#define KKC_TYPE_RULE (kkc_rule_get_type ())
#define KKC_RULE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_RULE, KkcRule))
#define KKC_RULE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_RULE, KkcRuleClass))
#define KKC_IS_RULE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_RULE))
#define KKC_IS_RULE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_RULE))
#define KKC_RULE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_RULE, KkcRuleClass))

typedef struct _KkcRule KkcRule;
typedef struct _KkcRuleClass KkcRuleClass;
typedef struct _KkcRulePrivate KkcRulePrivate;

#define KKC_TYPE_MAP_FILE (kkc_map_file_get_type ())
#define KKC_MAP_FILE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_MAP_FILE, KkcMapFile))
#define KKC_MAP_FILE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_MAP_FILE, KkcMapFileClass))
#define KKC_IS_MAP_FILE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_MAP_FILE))
#define KKC_IS_MAP_FILE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_MAP_FILE))
#define KKC_MAP_FILE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_MAP_FILE, KkcMapFileClass))

typedef struct _KkcMapFile KkcMapFile;
typedef struct _KkcMapFileClass KkcMapFileClass;

#define KKC_TYPE_ROM_KANA_MAP_FILE (kkc_rom_kana_map_file_get_type ())
#define KKC_ROM_KANA_MAP_FILE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_ROM_KANA_MAP_FILE, KkcRomKanaMapFile))
#define KKC_ROM_KANA_MAP_FILE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_ROM_KANA_MAP_FILE, KkcRomKanaMapFileClass))
#define KKC_IS_ROM_KANA_MAP_FILE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_ROM_KANA_MAP_FILE))
#define KKC_IS_ROM_KANA_MAP_FILE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_ROM_KANA_MAP_FILE))
#define KKC_ROM_KANA_MAP_FILE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_ROM_KANA_MAP_FILE, KkcRomKanaMapFileClass))

typedef struct _KkcRomKanaMapFile KkcRomKanaMapFile;
typedef struct _KkcRomKanaMapFileClass KkcRomKanaMapFileClass;

#define KKC_TYPE_USER_RULE (kkc_user_rule_get_type ())
#define KKC_USER_RULE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_USER_RULE, KkcUserRule))
#define KKC_USER_RULE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_USER_RULE, KkcUserRuleClass))
#define KKC_IS_USER_RULE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_USER_RULE))
#define KKC_IS_USER_RULE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_USER_RULE))
#define KKC_USER_RULE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_USER_RULE, KkcUserRuleClass))

typedef struct _KkcUserRule KkcUserRule;
typedef struct _KkcUserRuleClass KkcUserRuleClass;
typedef struct _KkcUserRulePrivate KkcUserRulePrivate;

#define KKC_TYPE_METADATA_FILE (kkc_metadata_file_get_type ())
#define KKC_METADATA_FILE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_METADATA_FILE, KkcMetadataFile))
#define KKC_METADATA_FILE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_METADATA_FILE, KkcMetadataFileClass))
#define KKC_IS_METADATA_FILE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_METADATA_FILE))
#define KKC_IS_METADATA_FILE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_METADATA_FILE))
#define KKC_METADATA_FILE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_METADATA_FILE, KkcMetadataFileClass))

typedef struct _KkcMetadataFile KkcMetadataFile;
typedef struct _KkcMetadataFileClass KkcMetadataFileClass;

#define KKC_TYPE_RULE_METADATA (kkc_rule_metadata_get_type ())
#define KKC_RULE_METADATA(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_RULE_METADATA, KkcRuleMetadata))
#define KKC_RULE_METADATA_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_RULE_METADATA, KkcRuleMetadataClass))
#define KKC_IS_RULE_METADATA(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_RULE_METADATA))
#define KKC_IS_RULE_METADATA_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_RULE_METADATA))
#define KKC_RULE_METADATA_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_RULE_METADATA, KkcRuleMetadataClass))

typedef struct _KkcRuleMetadata KkcRuleMetadata;
typedef struct _KkcRuleMetadataClass KkcRuleMetadataClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define __vala_JsonNode_free0(var) ((var == NULL) ? NULL : (var = (_vala_JsonNode_free (var), NULL)))

#define KKC_TYPE_KANA_MODE (kkc_kana_mode_get_type ())

#define KKC_TYPE_INPUT_MODE (kkc_input_mode_get_type ())

#define KKC_TYPE_KEYMAP (kkc_keymap_get_type ())
#define KKC_KEYMAP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_KEYMAP, KkcKeymap))
#define KKC_KEYMAP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_KEYMAP, KkcKeymapClass))
#define KKC_IS_KEYMAP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_KEYMAP))
#define KKC_IS_KEYMAP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_KEYMAP))
#define KKC_KEYMAP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_KEYMAP, KkcKeymapClass))

typedef struct _KkcKeymap KkcKeymap;
typedef struct _KkcKeymapClass KkcKeymapClass;
#define _g_type_class_unref0(var) ((var == NULL) ? NULL : (var = (g_type_class_unref (var), NULL)))

#define KKC_TYPE_KEYMAP_ENTRY (kkc_keymap_entry_get_type ())

#define KKC_TYPE_KEY_EVENT (kkc_key_event_get_type ())
#define KKC_KEY_EVENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_KEY_EVENT, KkcKeyEvent))
#define KKC_KEY_EVENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_KEY_EVENT, KkcKeyEventClass))
#define KKC_IS_KEY_EVENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_KEY_EVENT))
#define KKC_IS_KEY_EVENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_KEY_EVENT))
#define KKC_KEY_EVENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_KEY_EVENT, KkcKeyEventClass))

typedef struct _KkcKeyEvent KkcKeyEvent;
typedef struct _KkcKeyEventClass KkcKeyEventClass;
typedef struct _KkcKeymapEntry KkcKeymapEntry;

struct _KkcRule {
	GObject parent_instance;
	KkcRulePrivate * priv;
	KkcRomKanaMapFile* rom_kana;
};

struct _KkcRuleClass {
	GObjectClass parent_class;
};

struct _KkcUserRule {
	KkcRule parent_instance;
	KkcUserRulePrivate * priv;
};

struct _KkcUserRuleClass {
	KkcRuleClass parent_class;
};

struct _KkcUserRulePrivate {
	KkcRuleMetadata* parent;
	gchar* path;
};

typedef enum  {
	KKC_RULE_PARSE_ERROR_FAILED
} KkcRuleParseError;
#define KKC_RULE_PARSE_ERROR kkc_rule_parse_error_quark ()
typedef enum  {
	KKC_KANA_MODE_HIRAGANA,
	KKC_KANA_MODE_KATAKANA,
	KKC_KANA_MODE_HANKAKU_KATAKANA,
	KKC_KANA_MODE_LATIN,
	KKC_KANA_MODE_WIDE_LATIN
} KkcKanaMode;

typedef enum  {
	KKC_INPUT_MODE_HIRAGANA = KKC_KANA_MODE_HIRAGANA,
	KKC_INPUT_MODE_KATAKANA = KKC_KANA_MODE_KATAKANA,
	KKC_INPUT_MODE_HANKAKU_KATAKANA = KKC_KANA_MODE_HANKAKU_KATAKANA,
	KKC_INPUT_MODE_LATIN = KKC_KANA_MODE_LATIN,
	KKC_INPUT_MODE_WIDE_LATIN = KKC_KANA_MODE_WIDE_LATIN,
	KKC_INPUT_MODE_DIRECT
} KkcInputMode;

struct _KkcKeymapEntry {
	KkcKeyEvent* key;
	gchar* command;
};


static gpointer kkc_user_rule_parent_class = NULL;

GType kkc_rule_get_type (void) G_GNUC_CONST;
GType kkc_map_file_get_type (void) G_GNUC_CONST;
GType kkc_rom_kana_map_file_get_type (void) G_GNUC_CONST;
GType kkc_user_rule_get_type (void) G_GNUC_CONST;
GType kkc_metadata_file_get_type (void) G_GNUC_CONST;
GType kkc_rule_metadata_get_type (void) G_GNUC_CONST;
#define KKC_USER_RULE_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), KKC_TYPE_USER_RULE, KkcUserRulePrivate))
enum  {
	KKC_USER_RULE_DUMMY_PROPERTY
};
GQuark kkc_rule_parse_error_quark (void);
KkcUserRule* kkc_user_rule_new (KkcRuleMetadata* parent, const gchar* base_dir, const gchar* prefix, GError** error);
KkcUserRule* kkc_user_rule_construct (GType object_type, KkcRuleMetadata* parent, const gchar* base_dir, const gchar* prefix, GError** error);
const gchar* kkc_metadata_file_get_name (KkcMetadataFile* self);
static void kkc_user_rule_write_files (KkcRuleMetadata* parent, const gchar* path, const gchar* name, GError** error);
KkcRuleMetadata* kkc_rule_metadata_new (const gchar* name, const gchar* filename, GError** error);
KkcRuleMetadata* kkc_rule_metadata_construct (GType object_type, const gchar* name, const gchar* filename, GError** error);
KkcRule* kkc_rule_new (KkcRuleMetadata* metadata, GError** error);
KkcRule* kkc_rule_construct (GType object_type, KkcRuleMetadata* metadata, GError** error);
static JsonBuilder* kkc_user_rule_create_metadata (KkcRuleMetadata* parent, const gchar* name);
static void _vala_JsonNode_free (JsonNode* self);
GType kkc_kana_mode_get_type (void) G_GNUC_CONST;
GType kkc_input_mode_get_type (void) G_GNUC_CONST;
static GEnumValue* _g_enum_value_dup (GEnumValue* self);
GType kkc_keymap_get_type (void) G_GNUC_CONST;
static JsonBuilder* kkc_user_rule_create_keymap (KkcRuleMetadata* parent, const gchar* name, KkcKeymap* keymap);
static JsonBuilder* kkc_user_rule_create_rom_kana (KkcRuleMetadata* parent, const gchar* name);
const gchar* kkc_metadata_file_get_description (KkcMetadataFile* self);
const gchar* kkc_rule_metadata_get_filter (KkcRuleMetadata* self);
gint kkc_rule_metadata_get_priority (KkcRuleMetadata* self);
GType kkc_keymap_entry_get_type (void) G_GNUC_CONST;
GType kkc_key_event_get_type (void) G_GNUC_CONST;
KkcKeymapEntry* kkc_keymap_entry_dup (const KkcKeymapEntry* self);
void kkc_keymap_entry_free (KkcKeymapEntry* self);
void kkc_keymap_entry_copy (const KkcKeymapEntry* self, KkcKeymapEntry* dest);
void kkc_keymap_entry_destroy (KkcKeymapEntry* self);
KkcKeymapEntry* kkc_keymap_local_entries (KkcKeymap* self, int* result_length1);
gchar* kkc_key_event_to_string (KkcKeyEvent* self);
static void _vala_KkcKeymapEntry_array_free (KkcKeymapEntry* array, gint array_length);
void kkc_user_rule_write (KkcUserRule* self, KkcInputMode input_mode, GError** error);
KkcKeymap* kkc_rule_get_keymap (KkcRule* self, KkcInputMode mode);
static void kkc_user_rule_finalize (GObject* obj);


/**
         * Create a new UserRule.
         *
         * @param parent metadata of the parent rule
         * @param base_dir base directory where this user rule is saved
         * @param prefix a string prepended to the rule name
         */
static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


KkcUserRule* kkc_user_rule_construct (GType object_type, KkcRuleMetadata* parent, const gchar* base_dir, const gchar* prefix, GError** error) {
	KkcUserRule * self = NULL;
	gchar* path = NULL;
	const gchar* _tmp0_ = NULL;
	KkcRuleMetadata* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
	gchar* _tmp4_ = NULL;
	gchar* name = NULL;
	const gchar* _tmp5_ = NULL;
	gchar* _tmp6_ = NULL;
	gchar* _tmp7_ = NULL;
	KkcRuleMetadata* _tmp8_ = NULL;
	const gchar* _tmp9_ = NULL;
	const gchar* _tmp10_ = NULL;
	gchar* _tmp11_ = NULL;
	gchar* _tmp12_ = NULL;
	const gchar* _tmp13_ = NULL;
	gboolean _tmp14_ = FALSE;
	KkcRuleMetadata* metadata = NULL;
	const gchar* _tmp18_ = NULL;
	const gchar* _tmp19_ = NULL;
	gchar* _tmp20_ = NULL;
	gchar* _tmp21_ = NULL;
	KkcRuleMetadata* _tmp22_ = NULL;
	KkcRuleMetadata* _tmp23_ = NULL;
	KkcRuleMetadata* _tmp24_ = NULL;
	const gchar* _tmp25_ = NULL;
	gchar* _tmp26_ = NULL;
	KkcRuleMetadata* _tmp27_ = NULL;
	KkcRuleMetadata* _tmp28_ = NULL;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (parent != NULL, NULL);
	g_return_val_if_fail (base_dir != NULL, NULL);
	g_return_val_if_fail (prefix != NULL, NULL);
	_tmp0_ = base_dir;
	_tmp1_ = parent;
	_tmp2_ = kkc_metadata_file_get_name ((KkcMetadataFile*) _tmp1_);
	_tmp3_ = _tmp2_;
	_tmp4_ = g_build_filename (_tmp0_, _tmp3_, NULL);
	path = _tmp4_;
	_tmp5_ = prefix;
	_tmp6_ = g_strconcat (_tmp5_, ":", NULL);
	_tmp7_ = _tmp6_;
	_tmp8_ = parent;
	_tmp9_ = kkc_metadata_file_get_name ((KkcMetadataFile*) _tmp8_);
	_tmp10_ = _tmp9_;
	_tmp11_ = g_strconcat (_tmp7_, _tmp10_, NULL);
	_tmp12_ = _tmp11_;
	_g_free0 (_tmp7_);
	name = _tmp12_;
	_tmp13_ = path;
	_tmp14_ = g_file_test (_tmp13_, G_FILE_TEST_IS_DIR);
	if (!_tmp14_) {
		KkcRuleMetadata* _tmp15_ = NULL;
		const gchar* _tmp16_ = NULL;
		const gchar* _tmp17_ = NULL;
		_tmp15_ = parent;
		_tmp16_ = path;
		_tmp17_ = name;
		kkc_user_rule_write_files (_tmp15_, _tmp16_, _tmp17_, &_inner_error_);
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			g_propagate_error (error, _inner_error_);
			_g_free0 (name);
			_g_free0 (path);
			_g_object_unref0 (self);
			return NULL;
		}
	}
	_tmp18_ = name;
	_tmp19_ = path;
	_tmp20_ = g_build_filename (_tmp19_, "metadata.json", NULL);
	_tmp21_ = _tmp20_;
	_tmp22_ = kkc_rule_metadata_new (_tmp18_, _tmp21_, &_inner_error_);
	_tmp23_ = _tmp22_;
	_g_free0 (_tmp21_);
	metadata = _tmp23_;
	if (G_UNLIKELY (_inner_error_ != NULL)) {
		g_propagate_error (error, _inner_error_);
		_g_free0 (name);
		_g_free0 (path);
		_g_object_unref0 (self);
		return NULL;
	}
	_tmp24_ = metadata;
	self = (KkcUserRule*) kkc_rule_construct (object_type, _tmp24_, &_inner_error_);
	if (G_UNLIKELY (_inner_error_ != NULL)) {
		g_propagate_error (error, _inner_error_);
		_g_object_unref0 (metadata);
		_g_free0 (name);
		_g_free0 (path);
		_g_object_unref0 (self);
		return NULL;
	}
	_tmp25_ = path;
	_tmp26_ = g_strdup (_tmp25_);
	_g_free0 (self->priv->path);
	self->priv->path = _tmp26_;
	_tmp27_ = parent;
	_tmp28_ = _g_object_ref0 (_tmp27_);
	_g_object_unref0 (self->priv->parent);
	self->priv->parent = _tmp28_;
	_g_object_unref0 (metadata);
	_g_free0 (name);
	_g_free0 (path);
	return self;
}


KkcUserRule* kkc_user_rule_new (KkcRuleMetadata* parent, const gchar* base_dir, const gchar* prefix, GError** error) {
	return kkc_user_rule_construct (KKC_TYPE_USER_RULE, parent, base_dir, prefix, error);
}


static void _vala_JsonNode_free (JsonNode* self) {
	g_boxed_free (json_node_get_type (), self);
}


static GEnumValue* _g_enum_value_dup (GEnumValue* self) {
	GEnumValue* dup;
	dup = g_new0 (GEnumValue, 1);
	memcpy (dup, self, sizeof (GEnumValue));
	return dup;
}


static gpointer __g_enum_value_dup0 (gpointer self) {
	return self ? _g_enum_value_dup (self) : NULL;
}


static void kkc_user_rule_write_files (KkcRuleMetadata* parent, const gchar* path, const gchar* name, GError** error) {
	JsonGenerator* generator = NULL;
	JsonGenerator* _tmp0_ = NULL;
	JsonGenerator* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	JsonBuilder* metadata_builder = NULL;
	KkcRuleMetadata* _tmp3_ = NULL;
	const gchar* _tmp4_ = NULL;
	JsonBuilder* _tmp5_ = NULL;
	JsonGenerator* _tmp6_ = NULL;
	JsonBuilder* _tmp7_ = NULL;
	JsonNode* _tmp8_ = NULL;
	JsonNode* _tmp9_ = NULL;
	gchar* metadata_filename = NULL;
	const gchar* _tmp10_ = NULL;
	gchar* _tmp11_ = NULL;
	JsonGenerator* _tmp12_ = NULL;
	const gchar* _tmp13_ = NULL;
	gchar* keymap_path = NULL;
	const gchar* _tmp14_ = NULL;
	gchar* _tmp15_ = NULL;
	const gchar* _tmp16_ = NULL;
	GEnumClass* enum_class = NULL;
	GTypeClass* _tmp17_ = NULL;
	gchar* rom_kana_path = NULL;
	const gchar* _tmp46_ = NULL;
	gchar* _tmp47_ = NULL;
	const gchar* _tmp48_ = NULL;
	JsonBuilder* rom_kana_builder = NULL;
	KkcRuleMetadata* _tmp49_ = NULL;
	JsonBuilder* _tmp50_ = NULL;
	JsonGenerator* _tmp51_ = NULL;
	JsonBuilder* _tmp52_ = NULL;
	JsonNode* _tmp53_ = NULL;
	JsonNode* _tmp54_ = NULL;
	gchar* rom_kana_filename = NULL;
	const gchar* _tmp55_ = NULL;
	gchar* _tmp56_ = NULL;
	JsonGenerator* _tmp57_ = NULL;
	const gchar* _tmp58_ = NULL;
	GError * _inner_error_ = NULL;
	g_return_if_fail (parent != NULL);
	g_return_if_fail (path != NULL);
	g_return_if_fail (name != NULL);
	_tmp0_ = json_generator_new ();
	generator = _tmp0_;
	_tmp1_ = generator;
	json_generator_set_pretty (_tmp1_, TRUE);
	_tmp2_ = path;
	g_mkdir_with_parents (_tmp2_, 448);
	_tmp3_ = parent;
	_tmp4_ = name;
	_tmp5_ = kkc_user_rule_create_metadata (_tmp3_, _tmp4_);
	metadata_builder = _tmp5_;
	_tmp6_ = generator;
	_tmp7_ = metadata_builder;
	_tmp8_ = json_builder_get_root (_tmp7_);
	_tmp9_ = _tmp8_;
	json_generator_set_root (_tmp6_, _tmp9_);
	__vala_JsonNode_free0 (_tmp9_);
	_tmp10_ = path;
	_tmp11_ = g_build_filename (_tmp10_, "metadata.json", NULL);
	metadata_filename = _tmp11_;
	_tmp12_ = generator;
	_tmp13_ = metadata_filename;
	json_generator_to_file (_tmp12_, _tmp13_, &_inner_error_);
	if (G_UNLIKELY (_inner_error_ != NULL)) {
		g_propagate_error (error, _inner_error_);
		_g_free0 (metadata_filename);
		_g_object_unref0 (metadata_builder);
		_g_object_unref0 (generator);
		return;
	}
	_tmp14_ = path;
	_tmp15_ = g_build_filename (_tmp14_, "keymap", NULL);
	keymap_path = _tmp15_;
	_tmp16_ = keymap_path;
	g_mkdir_with_parents (_tmp16_, 448);
	_tmp17_ = g_type_class_ref (KKC_TYPE_INPUT_MODE);
	enum_class = (GEnumClass*) _tmp17_;
	{
		gint i = 0;
		GEnumClass* _tmp18_ = NULL;
		gint _tmp19_ = 0;
		_tmp18_ = enum_class;
		_tmp19_ = _tmp18_->minimum;
		i = _tmp19_;
		{
			gboolean _tmp20_ = FALSE;
			_tmp20_ = TRUE;
			while (TRUE) {
				gint _tmp22_ = 0;
				GEnumClass* _tmp23_ = NULL;
				gint _tmp24_ = 0;
				GEnumValue* enum_value = NULL;
				GEnumClass* _tmp25_ = NULL;
				gint _tmp26_ = 0;
				GEnumValue* _tmp27_ = NULL;
				GEnumValue* _tmp28_ = NULL;
				JsonBuilder* keymap_builder = NULL;
				KkcRuleMetadata* _tmp29_ = NULL;
				GEnumValue* _tmp30_ = NULL;
				const gchar* _tmp31_ = NULL;
				JsonBuilder* _tmp32_ = NULL;
				JsonGenerator* _tmp33_ = NULL;
				JsonBuilder* _tmp34_ = NULL;
				JsonNode* _tmp35_ = NULL;
				JsonNode* _tmp36_ = NULL;
				gchar* keymap_filename = NULL;
				const gchar* _tmp37_ = NULL;
				GEnumValue* _tmp38_ = NULL;
				const gchar* _tmp39_ = NULL;
				gchar* _tmp40_ = NULL;
				gchar* _tmp41_ = NULL;
				gchar* _tmp42_ = NULL;
				gchar* _tmp43_ = NULL;
				JsonGenerator* _tmp44_ = NULL;
				const gchar* _tmp45_ = NULL;
				if (!_tmp20_) {
					gint _tmp21_ = 0;
					_tmp21_ = i;
					i = _tmp21_ + 1;
				}
				_tmp20_ = FALSE;
				_tmp22_ = i;
				_tmp23_ = enum_class;
				_tmp24_ = _tmp23_->maximum;
				if (!(_tmp22_ <= _tmp24_)) {
					break;
				}
				_tmp25_ = enum_class;
				_tmp26_ = i;
				_tmp27_ = g_enum_get_value (_tmp25_, _tmp26_);
				_tmp28_ = __g_enum_value_dup0 (_tmp27_);
				enum_value = _tmp28_;
				_tmp29_ = parent;
				_tmp30_ = enum_value;
				_tmp31_ = (*_tmp30_).value_nick;
				_tmp32_ = kkc_user_rule_create_keymap (_tmp29_, _tmp31_, NULL);
				keymap_builder = _tmp32_;
				_tmp33_ = generator;
				_tmp34_ = keymap_builder;
				_tmp35_ = json_builder_get_root (_tmp34_);
				_tmp36_ = _tmp35_;
				json_generator_set_root (_tmp33_, _tmp36_);
				__vala_JsonNode_free0 (_tmp36_);
				_tmp37_ = keymap_path;
				_tmp38_ = enum_value;
				_tmp39_ = (*_tmp38_).value_nick;
				_tmp40_ = g_strdup_printf ("%s.json", _tmp39_);
				_tmp41_ = _tmp40_;
				_tmp42_ = g_build_filename (_tmp37_, _tmp41_, NULL);
				_tmp43_ = _tmp42_;
				_g_free0 (_tmp41_);
				keymap_filename = _tmp43_;
				_tmp44_ = generator;
				_tmp45_ = keymap_filename;
				json_generator_to_file (_tmp44_, _tmp45_, &_inner_error_);
				if (G_UNLIKELY (_inner_error_ != NULL)) {
					g_propagate_error (error, _inner_error_);
					_g_free0 (keymap_filename);
					_g_object_unref0 (keymap_builder);
					_g_free0 (enum_value);
					_g_type_class_unref0 (enum_class);
					_g_free0 (keymap_path);
					_g_free0 (metadata_filename);
					_g_object_unref0 (metadata_builder);
					_g_object_unref0 (generator);
					return;
				}
				_g_free0 (keymap_filename);
				_g_object_unref0 (keymap_builder);
				_g_free0 (enum_value);
			}
		}
	}
	_tmp46_ = path;
	_tmp47_ = g_build_filename (_tmp46_, "rom-kana", NULL);
	rom_kana_path = _tmp47_;
	_tmp48_ = rom_kana_path;
	g_mkdir_with_parents (_tmp48_, 448);
	_tmp49_ = parent;
	_tmp50_ = kkc_user_rule_create_rom_kana (_tmp49_, "default");
	rom_kana_builder = _tmp50_;
	_tmp51_ = generator;
	_tmp52_ = rom_kana_builder;
	_tmp53_ = json_builder_get_root (_tmp52_);
	_tmp54_ = _tmp53_;
	json_generator_set_root (_tmp51_, _tmp54_);
	__vala_JsonNode_free0 (_tmp54_);
	_tmp55_ = rom_kana_path;
	_tmp56_ = g_build_filename (_tmp55_, "default.json", NULL);
	rom_kana_filename = _tmp56_;
	_tmp57_ = generator;
	_tmp58_ = rom_kana_filename;
	json_generator_to_file (_tmp57_, _tmp58_, &_inner_error_);
	if (G_UNLIKELY (_inner_error_ != NULL)) {
		g_propagate_error (error, _inner_error_);
		_g_free0 (rom_kana_filename);
		_g_object_unref0 (rom_kana_builder);
		_g_free0 (rom_kana_path);
		_g_type_class_unref0 (enum_class);
		_g_free0 (keymap_path);
		_g_free0 (metadata_filename);
		_g_object_unref0 (metadata_builder);
		_g_object_unref0 (generator);
		return;
	}
	_g_free0 (rom_kana_filename);
	_g_object_unref0 (rom_kana_builder);
	_g_free0 (rom_kana_path);
	_g_type_class_unref0 (enum_class);
	_g_free0 (keymap_path);
	_g_free0 (metadata_filename);
	_g_object_unref0 (metadata_builder);
	_g_object_unref0 (generator);
}


static JsonBuilder* kkc_user_rule_create_metadata (KkcRuleMetadata* parent, const gchar* name) {
	JsonBuilder* result = NULL;
	JsonBuilder* builder = NULL;
	JsonBuilder* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	KkcRuleMetadata* _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
	const gchar* _tmp4_ = NULL;
	KkcRuleMetadata* _tmp5_ = NULL;
	const gchar* _tmp6_ = NULL;
	const gchar* _tmp7_ = NULL;
	KkcRuleMetadata* _tmp8_ = NULL;
	gint _tmp9_ = 0;
	gint _tmp10_ = 0;
	g_return_val_if_fail (parent != NULL, NULL);
	g_return_val_if_fail (name != NULL, NULL);
	_tmp0_ = json_builder_new ();
	builder = _tmp0_;
	json_builder_begin_object (builder);
	json_builder_set_member_name (builder, "name");
	_tmp1_ = name;
	json_builder_add_string_value (builder, _tmp1_);
	json_builder_set_member_name (builder, "description");
	_tmp2_ = parent;
	_tmp3_ = kkc_metadata_file_get_description ((KkcMetadataFile*) _tmp2_);
	_tmp4_ = _tmp3_;
	json_builder_add_string_value (builder, _tmp4_);
	json_builder_set_member_name (builder, "filter");
	_tmp5_ = parent;
	_tmp6_ = kkc_rule_metadata_get_filter (_tmp5_);
	_tmp7_ = _tmp6_;
	json_builder_add_string_value (builder, _tmp7_);
	json_builder_set_member_name (builder, "priority");
	_tmp8_ = parent;
	_tmp9_ = kkc_rule_metadata_get_priority (_tmp8_);
	_tmp10_ = _tmp9_;
	json_builder_add_int_value (builder, (gint64) _tmp10_);
	json_builder_end_object (builder);
	result = builder;
	return result;
}


static void _vala_KkcKeymapEntry_array_free (KkcKeymapEntry* array, gint array_length) {
	if (array != NULL) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			kkc_keymap_entry_destroy (&array[i]);
		}
	}
	g_free (array);
}


static JsonBuilder* kkc_user_rule_create_keymap (KkcRuleMetadata* parent, const gchar* name, KkcKeymap* keymap) {
	JsonBuilder* result = NULL;
	JsonBuilder* builder = NULL;
	JsonBuilder* _tmp0_ = NULL;
	JsonBuilder* _tmp1_ = NULL;
	JsonBuilder* _tmp2_ = NULL;
	JsonBuilder* _tmp3_ = NULL;
	JsonBuilder* _tmp4_ = NULL;
	KkcRuleMetadata* _tmp5_ = NULL;
	const gchar* _tmp6_ = NULL;
	const gchar* _tmp7_ = NULL;
	gchar* _tmp8_ = NULL;
	gchar* _tmp9_ = NULL;
	const gchar* _tmp10_ = NULL;
	gchar* _tmp11_ = NULL;
	gchar* _tmp12_ = NULL;
	JsonBuilder* _tmp13_ = NULL;
	KkcKeymap* _tmp14_ = NULL;
	JsonBuilder* _tmp37_ = NULL;
	g_return_val_if_fail (parent != NULL, NULL);
	g_return_val_if_fail (name != NULL, NULL);
	_tmp0_ = json_builder_new ();
	builder = _tmp0_;
	_tmp1_ = builder;
	json_builder_begin_object (_tmp1_);
	_tmp2_ = builder;
	json_builder_set_member_name (_tmp2_, "include");
	_tmp3_ = builder;
	json_builder_begin_array (_tmp3_);
	_tmp4_ = builder;
	_tmp5_ = parent;
	_tmp6_ = kkc_metadata_file_get_name ((KkcMetadataFile*) _tmp5_);
	_tmp7_ = _tmp6_;
	_tmp8_ = g_strconcat (_tmp7_, "/", NULL);
	_tmp9_ = _tmp8_;
	_tmp10_ = name;
	_tmp11_ = g_strconcat (_tmp9_, _tmp10_, NULL);
	_tmp12_ = _tmp11_;
	json_builder_add_string_value (_tmp4_, _tmp12_);
	_g_free0 (_tmp12_);
	_g_free0 (_tmp9_);
	_tmp13_ = builder;
	json_builder_end_array (_tmp13_);
	_tmp14_ = keymap;
	if (_tmp14_ != NULL) {
		JsonBuilder* _tmp15_ = NULL;
		JsonBuilder* _tmp16_ = NULL;
		JsonBuilder* _tmp17_ = NULL;
		JsonBuilder* _tmp18_ = NULL;
		KkcKeymapEntry* entries = NULL;
		KkcKeymap* _tmp19_ = NULL;
		gint _tmp20_ = 0;
		KkcKeymapEntry* _tmp21_ = NULL;
		gint entries_length1 = 0;
		gint _entries_size_ = 0;
		KkcKeymapEntry* _tmp22_ = NULL;
		gint _tmp22__length1 = 0;
		JsonBuilder* _tmp35_ = NULL;
		JsonBuilder* _tmp36_ = NULL;
		_tmp15_ = builder;
		json_builder_set_member_name (_tmp15_, "define");
		_tmp16_ = builder;
		json_builder_begin_object (_tmp16_);
		_tmp17_ = builder;
		json_builder_set_member_name (_tmp17_, "keymap");
		_tmp18_ = builder;
		json_builder_begin_object (_tmp18_);
		_tmp19_ = keymap;
		_tmp21_ = kkc_keymap_local_entries (_tmp19_, &_tmp20_);
		entries = _tmp21_;
		entries_length1 = _tmp20_;
		_entries_size_ = entries_length1;
		_tmp22_ = entries;
		_tmp22__length1 = entries_length1;
		{
			KkcKeymapEntry* entry_collection = NULL;
			gint entry_collection_length1 = 0;
			gint _entry_collection_size_ = 0;
			gint entry_it = 0;
			entry_collection = _tmp22_;
			entry_collection_length1 = _tmp22__length1;
			for (entry_it = 0; entry_it < _tmp22__length1; entry_it = entry_it + 1) {
				KkcKeymapEntry _tmp23_ = {0};
				KkcKeymapEntry entry = {0};
				kkc_keymap_entry_copy (&entry_collection[entry_it], &_tmp23_);
				entry = _tmp23_;
				{
					JsonBuilder* _tmp24_ = NULL;
					KkcKeymapEntry _tmp25_ = {0};
					KkcKeyEvent* _tmp26_ = NULL;
					gchar* _tmp27_ = NULL;
					gchar* _tmp28_ = NULL;
					KkcKeymapEntry _tmp29_ = {0};
					const gchar* _tmp30_ = NULL;
					_tmp24_ = builder;
					_tmp25_ = entry;
					_tmp26_ = _tmp25_.key;
					_tmp27_ = kkc_key_event_to_string (_tmp26_);
					_tmp28_ = _tmp27_;
					json_builder_set_member_name (_tmp24_, _tmp28_);
					_g_free0 (_tmp28_);
					_tmp29_ = entry;
					_tmp30_ = _tmp29_.command;
					if (_tmp30_ == NULL) {
						JsonBuilder* _tmp31_ = NULL;
						_tmp31_ = builder;
						json_builder_add_null_value (_tmp31_);
					} else {
						JsonBuilder* _tmp32_ = NULL;
						KkcKeymapEntry _tmp33_ = {0};
						const gchar* _tmp34_ = NULL;
						_tmp32_ = builder;
						_tmp33_ = entry;
						_tmp34_ = _tmp33_.command;
						json_builder_add_string_value (_tmp32_, _tmp34_);
					}
					kkc_keymap_entry_destroy (&entry);
				}
			}
		}
		_tmp35_ = builder;
		json_builder_end_object (_tmp35_);
		_tmp36_ = builder;
		json_builder_end_object (_tmp36_);
		entries = (_vala_KkcKeymapEntry_array_free (entries, entries_length1), NULL);
	}
	_tmp37_ = builder;
	json_builder_end_object (_tmp37_);
	result = builder;
	return result;
}


static JsonBuilder* kkc_user_rule_create_rom_kana (KkcRuleMetadata* parent, const gchar* name) {
	JsonBuilder* result = NULL;
	JsonBuilder* builder = NULL;
	JsonBuilder* _tmp0_ = NULL;
	KkcRuleMetadata* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
	gchar* _tmp4_ = NULL;
	gchar* _tmp5_ = NULL;
	const gchar* _tmp6_ = NULL;
	gchar* _tmp7_ = NULL;
	gchar* _tmp8_ = NULL;
	g_return_val_if_fail (parent != NULL, NULL);
	g_return_val_if_fail (name != NULL, NULL);
	_tmp0_ = json_builder_new ();
	builder = _tmp0_;
	json_builder_begin_object (builder);
	json_builder_set_member_name (builder, "include");
	json_builder_begin_array (builder);
	_tmp1_ = parent;
	_tmp2_ = kkc_metadata_file_get_name ((KkcMetadataFile*) _tmp1_);
	_tmp3_ = _tmp2_;
	_tmp4_ = g_strconcat (_tmp3_, "/", NULL);
	_tmp5_ = _tmp4_;
	_tmp6_ = name;
	_tmp7_ = g_strconcat (_tmp5_, _tmp6_, NULL);
	_tmp8_ = _tmp7_;
	json_builder_add_string_value (builder, _tmp8_);
	_g_free0 (_tmp8_);
	_g_free0 (_tmp5_);
	json_builder_end_array (builder);
	json_builder_end_object (builder);
	result = builder;
	return result;
}


/**
         * Save keymap for given input mode.
         *
         * @param input_mode input mode
         */
void kkc_user_rule_write (KkcUserRule* self, KkcInputMode input_mode, GError** error) {
	GEnumClass* enum_class = NULL;
	GTypeClass* _tmp0_ = NULL;
	gchar* keymap_name = NULL;
	KkcInputMode _tmp1_ = 0;
	GEnumValue* _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
	gchar* _tmp4_ = NULL;
	gchar* keymap_path = NULL;
	const gchar* _tmp5_ = NULL;
	gchar* _tmp6_ = NULL;
	JsonGenerator* generator = NULL;
	JsonGenerator* _tmp7_ = NULL;
	JsonBuilder* builder = NULL;
	KkcRuleMetadata* _tmp8_ = NULL;
	KkcInputMode _tmp9_ = 0;
	KkcKeymap* _tmp10_ = NULL;
	KkcKeymap* _tmp11_ = NULL;
	JsonBuilder* _tmp12_ = NULL;
	JsonBuilder* _tmp13_ = NULL;
	JsonNode* _tmp14_ = NULL;
	JsonNode* _tmp15_ = NULL;
	gchar* filename = NULL;
	gchar* _tmp16_ = NULL;
	gchar* _tmp17_ = NULL;
	gchar* _tmp18_ = NULL;
	gchar* _tmp19_ = NULL;
	GError * _inner_error_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = g_type_class_ref (KKC_TYPE_INPUT_MODE);
	enum_class = (GEnumClass*) _tmp0_;
	_tmp1_ = input_mode;
	_tmp2_ = g_enum_get_value (enum_class, (gint) _tmp1_);
	_tmp3_ = (*_tmp2_).value_nick;
	_tmp4_ = g_strdup (_tmp3_);
	keymap_name = _tmp4_;
	_tmp5_ = self->priv->path;
	_tmp6_ = g_build_filename (_tmp5_, "keymap", NULL);
	keymap_path = _tmp6_;
	g_mkdir_with_parents (keymap_path, 448);
	_tmp7_ = json_generator_new ();
	generator = _tmp7_;
	json_generator_set_pretty (generator, TRUE);
	_tmp8_ = self->priv->parent;
	_tmp9_ = input_mode;
	_tmp10_ = kkc_rule_get_keymap ((KkcRule*) self, _tmp9_);
	_tmp11_ = _tmp10_;
	_tmp12_ = kkc_user_rule_create_keymap (_tmp8_, keymap_name, _tmp11_);
	_tmp13_ = _tmp12_;
	_g_object_unref0 (_tmp11_);
	builder = _tmp13_;
	_tmp14_ = json_builder_get_root (builder);
	_tmp15_ = _tmp14_;
	json_generator_set_root (generator, _tmp15_);
	__vala_JsonNode_free0 (_tmp15_);
	_tmp16_ = g_strdup_printf ("%s.json", keymap_name);
	_tmp17_ = _tmp16_;
	_tmp18_ = g_build_filename (keymap_path, _tmp17_, NULL);
	_tmp19_ = _tmp18_;
	_g_free0 (_tmp17_);
	filename = _tmp19_;
	json_generator_to_file (generator, filename, &_inner_error_);
	if (G_UNLIKELY (_inner_error_ != NULL)) {
		g_propagate_error (error, _inner_error_);
		_g_free0 (filename);
		_g_object_unref0 (builder);
		_g_object_unref0 (generator);
		_g_free0 (keymap_path);
		_g_free0 (keymap_name);
		_g_type_class_unref0 (enum_class);
		return;
	}
	_g_free0 (filename);
	_g_object_unref0 (builder);
	_g_object_unref0 (generator);
	_g_free0 (keymap_path);
	_g_free0 (keymap_name);
	_g_type_class_unref0 (enum_class);
}


static void kkc_user_rule_class_init (KkcUserRuleClass * klass) {
	kkc_user_rule_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (KkcUserRulePrivate));
	G_OBJECT_CLASS (klass)->finalize = kkc_user_rule_finalize;
}


static void kkc_user_rule_instance_init (KkcUserRule * self) {
	self->priv = KKC_USER_RULE_GET_PRIVATE (self);
}


static void kkc_user_rule_finalize (GObject* obj) {
	KkcUserRule * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, KKC_TYPE_USER_RULE, KkcUserRule);
	_g_object_unref0 (self->priv->parent);
	_g_free0 (self->priv->path);
	G_OBJECT_CLASS (kkc_user_rule_parent_class)->finalize (obj);
}


/**
     * Object representing a writable typing rule.
     */
GType kkc_user_rule_get_type (void) {
	static volatile gsize kkc_user_rule_type_id__volatile = 0;
	if (g_once_init_enter (&kkc_user_rule_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (KkcUserRuleClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) kkc_user_rule_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (KkcUserRule), 0, (GInstanceInitFunc) kkc_user_rule_instance_init, NULL };
		GType kkc_user_rule_type_id;
		kkc_user_rule_type_id = g_type_register_static (KKC_TYPE_RULE, "KkcUserRule", &g_define_type_info, 0);
		g_once_init_leave (&kkc_user_rule_type_id__volatile, kkc_user_rule_type_id);
	}
	return kkc_user_rule_type_id__volatile;
}


