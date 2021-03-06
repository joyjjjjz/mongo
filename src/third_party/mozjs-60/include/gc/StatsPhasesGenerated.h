enum class PhaseKind : uint8_t {
  FIRST,
  MUTATOR = FIRST,
  GC_BEGIN,
  EVICT_NURSERY_FOR_MAJOR_GC,
  MARK_ROOTS,
  MARK_CCWS,
  MARK_STACK,
  MARK_RUNTIME_DATA,
  MARK_EMBEDDING,
  MARK_COMPARTMENTS,
  WAIT_BACKGROUND_THREAD,
  PREPARE,
  UNMARK,
  BUFFER_GRAY_ROOTS,
  MARK_DISCARD_CODE,
  RELAZIFY_FUNCTIONS,
  PURGE,
  PURGE_SHAPE_TABLES,
  JOIN_PARALLEL_TASKS,
  MARK,
  UNMARK_GRAY,
  MARK_DELAYED,
  SWEEP,
  SWEEP_MARK,
  SWEEP_MARK_INCOMING_BLACK,
  SWEEP_MARK_WEAK,
  SWEEP_MARK_INCOMING_GRAY,
  SWEEP_MARK_GRAY,
  SWEEP_MARK_GRAY_WEAK,
  FINALIZE_START,
  WEAK_ZONES_CALLBACK,
  WEAK_COMPARTMENT_CALLBACK,
  UPDATE_ATOMS_BITMAP,
  SWEEP_ATOMS_TABLE,
  SWEEP_COMPARTMENTS,
  SWEEP_DISCARD_CODE,
  SWEEP_INNER_VIEWS,
  SWEEP_CC_WRAPPER,
  SWEEP_BASE_SHAPE,
  SWEEP_INITIAL_SHAPE,
  SWEEP_TYPE_OBJECT,
  SWEEP_BREAKPOINT,
  SWEEP_REGEXP,
  SWEEP_COMPRESSION,
  SWEEP_WEAKMAPS,
  SWEEP_UNIQUEIDS,
  SWEEP_JIT_DATA,
  SWEEP_WEAK_CACHES,
  SWEEP_MISC,
  SWEEP_TYPES,
  SWEEP_TYPES_BEGIN,
  SWEEP_TYPES_END,
  SWEEP_OBJECT,
  SWEEP_STRING,
  SWEEP_SCRIPT,
  SWEEP_SCOPE,
  SWEEP_REGEXP_SHARED,
  SWEEP_SHAPE,
  FINALIZE_END,
  DESTROY,
  COMPACT,
  COMPACT_MOVE,
  COMPACT_UPDATE,
  COMPACT_UPDATE_CELLS,
  GC_END,
  MINOR_GC,
  EVICT_NURSERY,
  TRACE_HEAP,
  BARRIER,
  LIMIT,
  NONE = LIMIT,
  EXPLICIT_SUSPENSION = LIMIT,
  IMPLICIT_SUSPENSION
};

enum class Phase : uint8_t {
  FIRST,
  MUTATOR = FIRST,
  GC_BEGIN,
  EVICT_NURSERY_FOR_MAJOR_GC,
  MARK_ROOTS_1,
  MARK_CCWS_1,
  MARK_STACK_1,
  MARK_RUNTIME_DATA_1,
  MARK_EMBEDDING_1,
  MARK_COMPARTMENTS_1,
  WAIT_BACKGROUND_THREAD,
  PREPARE,
  UNMARK,
  BUFFER_GRAY_ROOTS,
  MARK_DISCARD_CODE,
  RELAZIFY_FUNCTIONS,
  PURGE,
  PURGE_SHAPE_TABLES,
  JOIN_PARALLEL_TASKS_1,
  MARK,
  MARK_ROOTS_2,
  MARK_CCWS_2,
  MARK_STACK_2,
  MARK_RUNTIME_DATA_2,
  MARK_EMBEDDING_2,
  MARK_COMPARTMENTS_2,
  UNMARK_GRAY_1,
  MARK_DELAYED,
  UNMARK_GRAY_2,
  SWEEP,
  SWEEP_MARK,
  UNMARK_GRAY_3,
  SWEEP_MARK_INCOMING_BLACK,
  UNMARK_GRAY_4,
  SWEEP_MARK_WEAK,
  UNMARK_GRAY_5,
  SWEEP_MARK_INCOMING_GRAY,
  SWEEP_MARK_GRAY,
  SWEEP_MARK_GRAY_WEAK,
  FINALIZE_START,
  WEAK_ZONES_CALLBACK,
  WEAK_COMPARTMENT_CALLBACK,
  UPDATE_ATOMS_BITMAP,
  SWEEP_ATOMS_TABLE,
  SWEEP_COMPARTMENTS,
  SWEEP_DISCARD_CODE,
  SWEEP_INNER_VIEWS,
  SWEEP_CC_WRAPPER,
  SWEEP_BASE_SHAPE,
  SWEEP_INITIAL_SHAPE,
  SWEEP_TYPE_OBJECT,
  SWEEP_BREAKPOINT,
  SWEEP_REGEXP,
  SWEEP_COMPRESSION,
  SWEEP_WEAKMAPS,
  SWEEP_UNIQUEIDS,
  SWEEP_JIT_DATA,
  SWEEP_WEAK_CACHES,
  SWEEP_MISC,
  SWEEP_TYPES,
  SWEEP_TYPES_BEGIN,
  SWEEP_TYPES_END,
  JOIN_PARALLEL_TASKS_2,
  SWEEP_OBJECT,
  SWEEP_STRING,
  SWEEP_SCRIPT,
  SWEEP_SCOPE,
  SWEEP_REGEXP_SHARED,
  SWEEP_SHAPE,
  FINALIZE_END,
  DESTROY,
  JOIN_PARALLEL_TASKS_3,
  COMPACT,
  COMPACT_MOVE,
  COMPACT_UPDATE,
  MARK_ROOTS_3,
  MARK_CCWS_3,
  MARK_STACK_3,
  MARK_RUNTIME_DATA_3,
  MARK_EMBEDDING_3,
  MARK_COMPARTMENTS_3,
  COMPACT_UPDATE_CELLS,
  JOIN_PARALLEL_TASKS_4,
  GC_END,
  MINOR_GC,
  MARK_ROOTS_4,
  MARK_CCWS_4,
  MARK_STACK_4,
  MARK_RUNTIME_DATA_4,
  MARK_EMBEDDING_4,
  MARK_COMPARTMENTS_4,
  EVICT_NURSERY,
  MARK_ROOTS_5,
  MARK_CCWS_5,
  MARK_STACK_5,
  MARK_RUNTIME_DATA_5,
  MARK_EMBEDDING_5,
  MARK_COMPARTMENTS_5,
  TRACE_HEAP,
  MARK_ROOTS_6,
  MARK_CCWS_6,
  MARK_STACK_6,
  MARK_RUNTIME_DATA_6,
  MARK_EMBEDDING_6,
  MARK_COMPARTMENTS_6,
  BARRIER,
  UNMARK_GRAY_6,
  LIMIT,
  NONE = LIMIT,
  EXPLICIT_SUSPENSION = LIMIT,
  IMPLICIT_SUSPENSION
};

static const size_t MAX_PHASE_NESTING = 4;
